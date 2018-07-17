#include<bits/stdc++.h>
using namespace std;

int dx[]={1,-1,1,-1,2,2,-2,-2};
int dy[]={2,2,-2,-2,1,-1,1,-1};

int level[9][9],row=9,col=9;

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

		for(k=0;k<8;k++)
		{
			tx=top.first+dx[k];
			ty=top.second+dy[k];

			if(tx>0&&tx<row&&ty>0&&ty<col&&level[tx][ty]==-1)
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
	//freopen("439i.txt","r",stdin);
	//freopen("439o.txt","w",stdout);

	char str1[3],str2[3],sox,soy,desx,desy,ans;

	while(scanf("%s %s",str1,str2)!=EOF)
	{
		sox=str1[1]-'0';
		soy=str1[0]-96;
		desx=str2[1]-'0';
		desy=str2[0]-96;

		ans=BFS_2D(sox,soy,desx,desy);

		printf("To get from %s to %s takes %d knight moves.\n",str1,str2,ans);
	}
	return 0;
}
