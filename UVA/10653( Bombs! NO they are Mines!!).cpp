#include<bits/stdc++.h>
using namespace std;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int cell[1000][1000],level[1000][1000],R,C;

int BFS_2D(int sx,int sy,int dex,int dey)
{
	memset(level,-1,sizeof(level));

	queue<pair<int,int> >sources;
	pair<int,int>top;
	int k,tx,ty;

	sources.push(make_pair(sx,sy));
	level[sx][sy]=0;

	while(sources.empty()==false)
	{
		top=sources.front();
		sources.pop();

		if(top.first==dex&&top.second==dey)
			break;

		for(k=0;k<4;k++)
		{
			tx=top.first+dx[k];
			ty=top.second+dy[k];

			if(tx>=0&&tx<R&&ty>=0&&ty<C&&cell[tx][ty]!=-1&&level[tx][ty]==-1)
			{
				level[tx][ty]=level[top.first][top.second]+1;

				sources.push(make_pair(tx,ty));
			}
		}
	}
	return level[dex][dey];
}

int main()
{
	//freopen("10653i.txt","r",stdin);
	//freopen("10653o.txt","w",stdout);

	int N,r,ct,c,sox,soy,desx,desy,ans;

	while(scanf("%d %d",&R,&C)!=EOF)
	{
		memset(cell,0,sizeof(cell));

		if(R==0&&C==0)
			return 0;

		scanf("%d",&N);

		while(N--)
		{
			scanf("%d %d",&r,&ct);

			while(ct--)
			{
				scanf("%d",&c);

				cell[r][c]=-1;
			}
		}

		scanf("%d %d %d %d",&sox,&soy,&desx,&desy);

		ans=BFS_2D(sox,soy,desx,desy);

		printf("%d\n",ans);
	}
	return 0;
}
