#include<bits/stdc++.h>
using namespace std;

int level[200];
vector<int>edge[200];

void BFS()
{
	int ck,i,x;

	memset(level,-1,sizeof(level));

	queue<int>sources;

	sources.push(0);
	level[0]=0;

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		for(i=0;i<edge[ck].size();i++)
		{
			x=edge[ck][i];

			if(level[x]==-1)
			{
				if(level[ck]==0)
					level[x]=1;
				else
					level[x]=0;

				sources.push(x);
			}
			else if(level[x]==level[ck])
			{
				printf("NOT BICOLORABLE.\n");
				return;
			}
		}
	}
	printf("BICOLORABLE.\n");
	return;
}

int main()
{
	//freopen("10004i.txt","r",stdin);
	//freopen("10004o.txt","w",stdout);

	int N,E,i,x,y;

	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)
			return 0;

		scanf("%d",&E);

		for(i=0;i<E;i++)
		{
			scanf("%d %d",&x,&y);

			edge[x].push_back(y);
			edge[y].push_back(x);
		}

		BFS();

		for(i=0;i<N;i++)
			edge[i].clear();
	}
	return 0;
}
