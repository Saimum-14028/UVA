#include<bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int matrix[81][81],C,path[81][81],cost[81],ans;

void FW()
{
	int i,j,k;

	for(k=1;k<=C;k++)
	{
		for(i=1;i<=C;i++)
		{
			for(j=1;j<=C;j++)
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
		ans=-1;
		return;
	}
	else
	{
		if(cost[path[i][j]]>ans)
			ans=cost[path[i][j]];
		//printf("-->%d",path[i][j]);
		PATH(path[i][j],j);
	}
}

int main()
{
	int R,Q,x,y,w,i,a=-1,source,destination;

	while(scanf("%d %d %d",&C,&R,&Q)!=EOF)
	{
		if(!C&&!R&&!Q)
			return 0;

		memset(matrix,0x3f,sizeof matrix);
		memset(path,-1,sizeof path);
		memset(cost,-1,sizeof cost);

		printf("Case #%d",a+2);

		if(++a)
			printf("\n");

		for(i=1;i<=C;i++)
			scanf("%d",&cost[i]);

		for(i=1;i<=R;i++)
		{
			scanf("%d %d %d",&x,&y,&w);

			matrix[x][y]=w;
			matrix[y][x]=w;

			path[x][y]=y;
			path[y][x]=x;
		}

		FW();

		while(Q--)
		{
			ans=-100;

			scanf("%d %d",&source,&destination);

			if(cost[source]>ans)
				ans=cost[source];

			PATH(source,destination);

			if(matrix[source][destination]==INF)
				printf("-1\n");
			else
			{
				ans+=matrix[source][destination];
				printf("%d\n",ans);
			}
		}
	}
	return 0;
}
