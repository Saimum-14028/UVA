#include<bits/stdc++.h>
using namespace std;

int visited[10001];
vector<int>edges[10001];

void BFS(int source)
{
	queue<int>sources;
	int ck,i,x;

	sources.push(source);

	visited[source]=1;

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		for(i=0;i<edges[ck].size();i++)
		{
			x=edges[ck][i];

			if(visited[x]==0)
			{
				visited[x]=1;

				sources.push(x);
			}
		}
	}

	return;
}

int main()
{
	//freopen("11518i.txt","r",stdin);
	//freopen("11518o.txt","w",stdout);

	int N,i,x,y,ans,q,t,M;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			ans=0;

			scanf("%d %d %d",&N,&M,&q);

			for(i=0;i<M;i++)
			{
				scanf("%d %d",&x,&y);

				edges[x].push_back(y);
			}

			memset(visited,0,sizeof(visited));

			while(q--)
			{
				scanf("%d",&x);

				BFS(x);
			}

			for(i=1;i<=N;i++)
			{
				if(visited[i]==1)
					ans++;
			}

			printf("%d\n",ans);

			for(i=1;i<=N;i++)
			edges[i].clear();
		}
	}
	return 0;
}

