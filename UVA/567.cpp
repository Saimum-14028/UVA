#include<bits/stdc++.h>
using namespace std;

int level[21];

int main()
{
	//freopen("567i.txt","r",stdin);
	//freopen("567o.txt","w",stdout);

	int C,x,y,a=0,ans,i,n;

	while(scanf("%d",&C)!=EOF)
	{
		vector<int>edge[21];

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

			memset(level,-1,sizeof(level));

			queue<int>sources;
			int ck,z;

			sources.push(x);
			level[x]=0;

			while(sources.empty()==false)
			{
				ck=sources.front();
				sources.pop();

				if(ck==y)
					break;

				for(i=0;i<edge[ck].size();i++)
				{
					z=edge[ck][i];

					if(level[z]==-1)
					{
						level[z]=level[ck]+1;
						sources.push(z);
					}
				}
			}

			printf("%2d to %2d: %d\n",x,y,level[y]);
		}

		printf("\n");

	}
	return 0;
}

