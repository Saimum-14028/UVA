#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GREY 1
#define BLACK 2

vector<int>graph[100006];
vector<int>ans;
int visit[100006],visited[100001];

void DFS(int source)
{
	int i;

	visited[source]=1;

	for(i=0;i<graph[source].size();i++)
	{
		if(visited[graph[source][i]]==0)
			DFS(graph[source][i]);
	}
}

bool dfs(int u)
{
	visit[u]=GREY;
	bool no_cycle=true;

	int sz=graph[u].size();

	for(int i=0;i<sz;i++)
	{
		int v=graph[u][i];

		if(visit[v]==WHITE)
			no_cycle=dfs(v);
		else if(visit[v]==GREY)
			return false;
	}

	visit[u]=BLACK;

	ans.push_back(u);

	return no_cycle;
}

bool topsort(int N)
{
	ans.clear();

	memset(visit,WHITE,sizeof(visit));

	int no_cycle=true,count=0;

	for(int i=1;i<=N;i++)
	{
		if(visit[i]==WHITE)
		{
			count++;
			no_cycle=no_cycle&dfs(i);
		}
	}

	return no_cycle;
}

int main()
{
	freopen("11504i.txt","r",stdin);
	freopen("11504o.txt","w",stdout);

	int N,E,x,y,i,z,t;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			int connectedComponents=0;

			memset(visited,0,sizeof(visited));

			scanf("%d %d",&N,&E);

			for(i=0;i<E;i++)
			{
				scanf("%d %d",&x,&y);

				graph[x].push_back(y);
				//graph[y].push_back(x);
			}

			z=topsort(N);

			///printf("%d\n",z);

			/*for(i=0;i<ans.size();i++)
				printf("%d ",ans[i]);*/

			for(i=ans.size()-1;i>=0;i--)
			{
				if(visited[ans[i]]==0)
				{
					DFS(ans[i]);
					connectedComponents++;
				}
			}

			printf("%d\n",connectedComponents);

			for(i=1;i<=N;i++)
				graph[i].clear();
		}
	}
	return 0;
}


