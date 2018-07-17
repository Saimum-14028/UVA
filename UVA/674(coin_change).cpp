#include<bits/stdc++.h>
using namespace std;

long long coin[]={50,25,10,5,1},make,dp[5][7490],n;

long long coin_change(long long i,long long amount)
{
	if(i>=5)
	{
		if(amount==0)
			return 1;
		else
			return 0;
	}

	if(dp[i][amount]!=-1)
		return dp[i][amount];

	long long ret1=0,ret2=0;

	if(amount-coin[i]>=0)
		ret1=coin_change(i,amount-coin[i]);

	ret2=coin_change(i+1,amount);

	dp[i][amount]=ret1+ret2;

	return dp[i][amount];
}

int main()
{
	//freopen("674i.txt","r",stdin);
//	freopen("674o.txt","w",stdout);

	long long i,t,ans;

	memset(dp,-1,sizeof(dp));

	while(scanf("%lld",&make)!=EOF)
	{
		ans=coin_change(0,make);

		printf("%lld\n",ans);
	}
	return 0;
}
