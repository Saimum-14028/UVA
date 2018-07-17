#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int matrix[23][23],N,M;
string str[23];

void FW()
{
	int i,j,k;

	for(k=1;k<=N;k++)
	{
		for(i=1;i<=N;i++)
		{
			for(j=1;j<=N;j++)
				matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
		}
	}
	return;
}

int calculate()
{
	int sum,ans,i,j,min=999999999;

	for(i=1;i<=N;i++)
	{
		sum=0;
		for(j=1;j<=N;j++)
		{
			if(j!=i)
				sum+=matrix[j][i];
		}
		if(sum<min)
		{
			min=sum;
			ans=i;
		}
	}
	return ans;
}

int main()
{
	//freopen("11015i.txt","r",stdin);
	//freopen("11015o.txt","w",stdout);

	int i,x,y,z,c=0,ans;

	while(scanf("%d %d",&N,&M)!=EOF)
	{
		memset(matrix,0x3f,sizeof matrix);

		if(N==0&&M==0)
			return 0;

		for(i=1;i<=N;i++)
			cin>>str[i];

		for(i=0;i<M;i++)
		{
			scanf("%d %d %d",&x,&y,&z);

			matrix[x][y]=z;
			matrix[y][x]=z;
		}

		FW();

		ans=calculate();

		printf("Case #%d : %s\n",++c,str[ans].c_str());
	}
	return 0;
}
