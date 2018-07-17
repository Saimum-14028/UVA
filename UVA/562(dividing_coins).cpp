#include<bits/stdc++.h>
using namespace std;

long long weight[101],m,cap,dp[101][100001];
bool visit[101][100001];

long long knapsack(long long i,long long w)
{
    if(i==m)
        return 0;

    if(visit[i][w])
        return dp[i][w];

    visit[i][w]=true;

    long long profit1,profit2;

    if(w+weight[i]<=cap)
		profit1 = weight[i] + knapsack(i + 1,w + weight[i]);
	else
		profit1=0;

	profit2=knapsack(i+1,w);

	dp[i][w]=max(profit1,profit2);

	return dp[i][w];
}

int main()
{
    //freopen("562i.txt","r",stdin);
    //freopen("562o.txt","w",stdout);

    long long n,i,sum,ans;

    while(scanf("%lld",&n)!=EOF)
    {
        while(n--)
        {
            memset(weight,0,sizeof weight);
            memset(visit,0,sizeof visit);

            scanf("%lld",&m);

            sum=0;

            for(i=0;i<m;i++)
            {

                scanf("%lld",&weight[i]);

                sum+=weight[i];
            }

            cap=sum/2;

            ans=knapsack(0,0);

            ans=abs(sum-2*ans);

            printf("%lld\n",ans);
        }
    }
    return 0;
}
