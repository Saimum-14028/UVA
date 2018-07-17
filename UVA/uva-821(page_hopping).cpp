#include<bits/stdc++.h>
#define N 100
#define INF 0x3f3f3f3f

using namespace std;

int matrix[101][101];

void FW()
{
	int i,j,k;

	for(k=1;k<=N;k++)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
			{
				if(matrix[i][j]>matrix[i][k]+matrix[k][j]&&i!=j)
					matrix[i][j]=matrix[i][k]+matrix[k][j];
			}
		}
	}
	return;
}

double calculate()
{
	double ans;
	int sum=0,count=0,i,j;

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			//cout<<matrix[i][j]<<' ';

			if(matrix[i][j]<INF)
			{
				//cout<<sum<<' '<<count<<' '<<i<<' '<<j<<endl;
				sum+=matrix[i][j];
				count++;
			}
		}
		//cout<<endl;
	}

	//cout<<sum<<' '<<count<<endl;

	ans=(1.0*sum/count);

	return ans;
}

int main()
{
//	freopen("821i.txt","r",stdin);
//	freopen("821o.txt","w",stdout);

	int x,y,a=0,c=0;
	double ans;

	memset(matrix,0x3f,sizeof matrix);

	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x==0&&y==0&&a)
			return 0;
		else if(x==0&&y==0&&a==0)
		{
			a=1;
			c++;

			FW();

			ans=calculate();

			printf("Case %d: average length between pages = %.3lf clicks\n",c,ans);

			memset(matrix,0x3f,sizeof matrix);
		}
		else
		{
			matrix[x][y]=1;
			a=0;
		}
	}
	return 0;
}
