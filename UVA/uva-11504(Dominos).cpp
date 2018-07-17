#include<bits/stdc++.h>
using namespace std;

vector<int>v[100001];
vector<int>ans;
int cnt[100001];
int visited[100001];

void topsort(int n)
{
	ans.clear();

	int i,j,k=0,x;

	while(1)
	{
		if(k==n)
			return;

		for(i=1;i<=n;i++)
		{
			if(cnt[i]==0)
			{
				cnt[i]=-1;
				break;
			}
		}

		//printf("%d ",i);
		ans.push_back(i);

		for(j=0;j<v[i].size();j++)
		{
			x=v[i][j];
			cnt[x]--;
		}
		k++;
	}
	return;
}

void DFS(int source)
{
	int i;

	visited[source]=1;

	for(i=0;i<v[source].size();i++)
	{
		if(visited[v[source][i]]==0)
			DFS(v[source][i]);
	}
}

int main()
{
	freopen("11504i.txt","r",stdin);
	freopen("11504o.txt","w",stdout);

	int n,e,i,j,x,y,t;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%d %d",&n,&e);

			int connectedComponents=0;

			memset(cnt,0,sizeof(cnt));
			memset(visited,0,sizeof(visited));

			for(i=0;i<e;i++)
			{
				scanf("%d %d",&x,&y);

				v[x].push_back(y);

				cnt[y]++;
			}

			topsort(n);

			for(i=0;i<ans.size();i++)
			{
				if(visited[ans[i]]==0)
				{
					DFS(ans[i]);
					connectedComponents++;
				}
			}

			printf("%d\n",connectedComponents);

			for(i=1;i<=n;i++)
				v[i].clear();
		}
	}
	return 0;
}
