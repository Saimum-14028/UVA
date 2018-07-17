#include<bits/stdc++.h>
using namespace std;

vector<int>edges[101];
int cnt[101],n;

void topsort()
{
	int i,j,k=0,x;

	while(1)
	{
		if(k==n)
		{
			printf("\n");
			return;
		}

		for(i=1;i<=n;i++)
		{
			if(cnt[i]==0)
			{
				cnt[i]=-1;
				//v.push_back(i);
				break;
			}
		}

		printf("%d",i);

		if(k!=n-1)
			printf(" ");

		for(j=0;j<edges[i].size();j++)
		{
			x=edges[i][j];
			cnt[x]--;
		}

		k++;
	}
}

int main()
{
	//freopen("10305i.txt","r",stdin);
	//freopen("10305o.txt","w",stdout);

	int m,i,x,y;

	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0&&m==0)
			return 0;

		memset(cnt,0,sizeof(cnt));

		for(i=0;i<m;i++)
		{
			scanf("%d %d",&x,&y);

			edges[x].push_back(y);
			cnt[y]++;
		}

		topsort();

		for(i=1;i<=n;i++)
			edges[i].clear();
	}
	return 0;
}
