#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int matrix[101][101],N,tax[101],path[101][101],dst;

void FW()
{
	int i,j,k;

	for(k=1;k<=N;k++)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(matrix[i][k]+matrix[k][j]+tax[k]<matrix[i][j])
				{
					matrix[i][j]=matrix[i][k]+matrix[k][j]+tax[k];
					path[i][j]=path[i][k];
				}
			}
		}
	}
	return;
}

int main()
{
//	freopen("523i.txt","r",stdin);
//	freopen("523o.txt","w",stdout);

	int t,i,j,source,destination,a=-1;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			memset(matrix,0,sizeof matrix);
			memset(tax,0,sizeof tax);
			memset(path,-1,sizeof path);

			N=0;
			char ch;

			while(1)
			{
				scanf("%d%c", &matrix[1][++N], &ch);

				if(matrix[1][N] == -1)
					matrix[1][N] = INF;
				else
				{
					path[1][N]=N;
				}

				if(ch == '\n')
					break;
			}

			for(i=2;i<=N;i++)
			{
				for(j=1;j<=N;j++)
				{
					scanf("%d",&matrix[i][j]);

					if(matrix[i][j]==-1)
						matrix[i][j]=INF;
					else
						path[i][j]=j;
				}
			}

			for(i=1;i<=N;i++)
				scanf("%d",&tax[i]);

			FW();

		/*	for(i=1;i<=N;i++)
			{
				for(j=1;j<=N;j++)
					printf("%d ",matrix[i][j]);
				printf("\n");
			}

			for(i=1;i<=N;i++)
			{
				for(j=1;j<=N;j++)
					printf("%d ",path[i][j]);
				printf("\n");
			}*/

			char line[1000];

			while(getchar()!='\n');

			while (fgets(line, 1000, stdin) && sscanf(line, "%d%d", &source, &destination) == 2)
			{
				if(++a)
					printf("\n");

				printf("From %d to %d :\n",source,destination);
				printf("Path: %d",source);

			///	PATH(source,destination);

				i=source;
				j=destination;


				if(source!=destination)
				{
					while(path[i][j]!=destination)
					{
						printf("-->%d",path[i][j]);
						i=path[i][j];
					}

					printf("-->%d",path[i][j]);
				}

				printf("\nTotal cost : %d\n",matrix[source][destination]);
			}
		}
	}
	return 0;
}
