#include<bits/stdc++.h>
using namespace std;

int level[21];
vector<int>edge[21];

int BFS(int source,int des)
{
	memset(level,-1,sizeof(level));

	queue<int>sources;
	int ck,i,x;

	sources.push(source);
	level[source]=0;

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		if(ck==des)
			break;

		for(i=0;i<edge[ck].size();i++)
		{
			x=edge[ck][i];

			if(level[x]==-1)
			{
				level[x]=level[ck]+1;
				sources.push(x);
			}
		}
	}
	return level[des];
}

int main()
{
	//freopen("567i.txt","r",stdin);
	//freopen("567o.txt","w",stdout);

	int C,x,y,a=0,ans,i,n;

	while(scanf("%d",&C)!=EOF)
	{
		while(C--)
		{
			//cout<<1<<endl;

			scanf("%d",&x);

			edge[1].push_back(x);
			edge[x].push_back(1);
		}

		for(i=2;i<20;i++)
		{
			//cout<<1<<endl;

			scanf("%d",&C);

			while(C--)
			{
				scanf("%d",&x);

				edge[i].push_back(x);
				edge[x].push_back(i);
			}
		}

		//cout<<1<<endl;

		printf("Test Set #%d\n",++a);

		scanf("%d",&n);

		while(n--)
		{
			//cout<<1<<endl;

			scanf("%d %d",&x,&y);

			ans=BFS(x,y);

			printf("%2d to %2d: %d\n",x,y,ans);
		}

		printf("\n");

		for(i=1;i<=20;i++)
			edge[i].clear();
	}
	return 0;
}
