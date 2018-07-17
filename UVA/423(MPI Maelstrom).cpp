#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;

int matrix[101][101],N,ans;

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
				}
			}
		}
	}
	return;
}

void calculate()
{
	ans=0;

	int i;

	for(i=1;i<=N;i++)
	{
		if(matrix[1][i]>ans)
			ans=matrix[1][i];
	}
	return;
}

int main()
{
//	freopen("423i.txt","r",stdin);
//	freopen("423o.txt","w",stdout);

	int i,j,x;

	while(scanf("%d",&N)!=EOF)
	{
		memset(matrix,0x3f,sizeof matrix);

		for(i=1;i<=N;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(i==j)
					matrix[i][i]=0;
				else
				{
					string s;

					cin>>s;

					if(s=="x")
						matrix[i][j]=matrix[j][i]=INF;
					else
					{
						stringstream geek(s);

						x=0;

						geek >> x;

						matrix[i][j]=matrix[j][i]=x;
					}
				}
			}
		}

		/*for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%d ",matrix[i][j]);

			printf("\n");
		}*/

		FW();

	/*	for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				printf("%d ",matrix[i][j]);

			printf("\n");
		}*/


		calculate();

		printf("%d\n",ans);
	}
	return 0;
}
