#include<bits/stdc++.h>
using namespace std;

int dx[]={-1,0,0};
int dy[]={0,1,-1};
string str="IEHOVA#";

int cell[10][10],level[10][10],row,col;
vector<pair<int,int> >parent[10];

void BFS_2D(int sx,int sy)
{
	memset(level,-1,sizeof(level));
	//memset(parent,-2,sizeof(parent));

	queue<pair<int,int> >sources;
	pair<int,int>top;
	int k,tx,ty,i,j;

	sources.push(make_pair(sx,sy));
	level[sx][sy]=0;
	parent[sx][sy]=make_pair(-1,-1);

	while(sources.empty()==false)
	{
		top=sources.front();
		sources.pop();

		if(cell[top.first][top.second]=='#')
			break;

		for(k=0;k<3;k++)
		{
			j=0;
			tx=top.first+dx[k];
			ty=top.second+dy[k];

			for(i=0;i<str.size();i++)
			{
				if(str[i]==cell[tx][ty])
					j=1;
			}

			if(tx>0 && tx<=row && ty>0 && ty<=col && j && level[tx][ty]==-1)
			{
				level[tx][ty]=level[top.first][top.second]+1;

				parent[tx][ty]=top;

				sources.push(make_pair(tx,ty)); //Pushing a new pair in the queue
			}
		}
	}

	return;
}

int main()
{
	int t,i,j,x,y,a,b;
	char ch;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			memset(cell,0,sizeof(cell));

			scanf("%d %d",&row,&col);

			for(i=1;i<=row;i++)
			{
				getchar();

				for(j=1;j<=col;j++)
				{
					scanf("%c",&ch);
					cell[i][j]=ch;

					if(ch=='@')
					{
						x=i;
						y=j;
					}

					if(ch=='#')
					{
						a=i;
						b=j;
					}
				}
			}

			BFS_2D(x,y);

			vector<pair<int,int> >path;
			pair<int,int>ans;

			path.push_back(make_pair(a,b));

			ans=parent[a][b];

			while(1)
			{
				if(ans.first==-1&&ans.second==-1)
					break;

				path.push_back(ans);

				//printf("%d ",x);

				ans=parent[ans.first][ans.second];
			}

			for(i=path.size()-1;i>=0;i--)
				printf("%d %d\n",path[i].first,path[i].second);

			printf("\n");

		}
	}
	return 0;
}
