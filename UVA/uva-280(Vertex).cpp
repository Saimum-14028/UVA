#include<bits/stdc++.h>
using namespace std;

int visited[101];
vector<int>edges[101];

int BFS(int source)
{
	memset(visited,0,sizeof(visited));

	queue<int>sources;
	int ck,i,x,count=0;

	sources.push(source);

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		for(i=0;i<edges[ck].size();i++)
		{
			x=edges[ck][i];

			if(visited[x]==0)
			{
				count++;

				visited[x]=1;

				sources.push(x);
			}
		}
	}

	return count;
}

int main()
{
	//freopen("280i.txt","r",stdin);
	//freopen("280o.txt","w",stdout);

	int N,i,x,y,ans,q;

	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)
			return 0;

		while(scanf("%d",&x))
		{
			if(x==0)
				break;

			while(scanf("%d",&y))
			{
				if(y==0)
					break;

				edges[x].push_back(y);
			}
		}

		scanf("%d",&q);

		while(q--)
		{
			scanf("%d",&x);

			ans=N-BFS(x);

			printf("%d",ans);

			for(i=1;i<=N;i++)
			{
				if(visited[i]==0)
					printf(" %d",i);
			}

			printf("\n");
		}

		for(i=1;i<=N;i++)
			edges[i].clear();
	}
	return 0;
}
