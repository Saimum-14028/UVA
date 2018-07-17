#include<bits/stdc++.h>
using namespace std;

long long price[1000],weight[1000],n,cap,dp[1000][31];
bool visit[1000][31];

long long knapsack(long long i,long long w)
{
	if(i==n)
		return 0;

	if(visit[i][w])
		return dp[i][w];

	visit[i][w]=true;

	long long profit1,profit2;

	if(w+weight[i]<=cap)
		profit1 = price[i] + knapsack(i + 1,w + weight[i]);
	else
		profit1=0;

	profit2=knapsack(i+1,w);

	dp[i][w]=max(profit1,profit2);

	return dp[i][w];
}

int main()
{
//	freopen("10130i.txt","r",stdin);
//	freopen("10130o.txt","w",stdout);

	long long t;

	while(scanf("%lld",&t)!=EOF)
	{
		while(t--)
		{
			long long sum=0,ans,i,g;

			memset(price,0,sizeof(price));
			memset(weight,0,sizeof(weight));

			scanf("%lld",&n);

			for(i=0;i<n;i++)
				scanf("%lld %lld",&price[i],&weight[i]);

			scanf("%lld",&g);

			while(g--)
			{
				memset(visit,0,sizeof(visit));

				scanf("%lld",&cap);

				ans=knapsack(0,0);

			//	cout<<ans<<endl;

				sum+=ans;
			}

			printf("%lld\n",sum);
		}
	}
	return 0;
}
