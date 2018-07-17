#include<bits/stdc++.h>
using namespace std;

double matrix[21][21];
int path[21][21],N;

void FW()
{
	int i,j,k;

	for(k=1;k<=N;k++)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(matrix[i][k]*matrix[k][j]>matrix[i][j])
				{
					matrix[i][j]=matrix[i][k]*matrix[k][j];
					path[i][j]=path[i][k];
				}
			}
		}
	}
	return;
}

int main()
{
	int i,j;

	while(scanf("%d",&N)!=EOF)
	{
		memset(matrix,0,sizeof matrix);
		memset(path,-1,sizeof path);

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(i==j)
					matrix[i][j]=1;
				else
					scanf("%lf",&matrix[i][j]);

				path[i][j]=j;
			}
		}

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%lf ",matrix[i][j]);
			printf("\n");
		}

		FW();

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%lf ",matrix[i][j]);
			printf("\n");
		}

	}
	return 0;
}
