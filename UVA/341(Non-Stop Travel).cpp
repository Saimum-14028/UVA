#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int matrix[11][11],path[11][11],N;

void FW()
{
	int i,j,k;

	for(k=1;k<=N;k++)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(matrix[i][k]+matrix[k][j]<matrix[i][j])
				{
					matrix[i][j]=matrix[i][k]+matrix[k][j];
					path[i][j]=path[i][k];
				}
			}
		}
	}
	return;
}

void PATH(int i,int j)
{
	if(i==j)
	{
		return;
	}
	else if(path[i][j]==-1)
	{
		return;
	}
	else
	{
		printf(" %d",path[i][j]);
		PATH(path[i][j],j);
	}
}

int main()
{
	//freopen("341i.txt","r",stdin);
	//freopen("341o.txt","w",stdout);

	int i,j,x,y,source,destination,a=0;

	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)
			return 0;

		memset(matrix,0x3f,sizeof matrix);
		memset(path,-1,sizeof path);

		for(i=1;i<=N;i++)
		{
			scanf("%d",&j);

			while(j--)
			{
				scanf("%d %d",&x,&y);

				matrix[i][x]=y;

				path[i][x]=x;
			}
		}

		/*for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%d ",matrix[i][j]);
			printf("\n");
		}*/

		FW();

		/*for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%d ",matrix[i][j]);
			printf("\n");
		}*/

		scanf("%d %d",&source,&destination);

		printf("Case %d: Path = %d",++a,source);

		PATH(source,destination);

		printf("; %d second delay\n",matrix[source][destination]);
	}
	return 0;
}
