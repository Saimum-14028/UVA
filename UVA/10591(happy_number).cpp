#include<bits/stdc++.h>
using namespace std;

long long power(long long n)
{
	return n*n;
}

int main()
{
	//freopen("10591i.txt","r",stdin);
	//freopen("10591o.txt","w",stdout);

	long long i,t;

	while(scanf("%lld",&t)!=EOF)
	{
		for(i=1;i<=t;i++)
		{
			long long n,x,y=0,sum=0;
			set<long long>s;

			scanf("%lld",&n);

			x=n;

			while(1)
			{
				while(x!=0)
				{
					sum+=power(x%10);
					x/=10;
				}

			//	printf("%lld\n",sum);

				s.insert(sum);

				if(sum==1)
					break;
				else if(s.size()==y)
					break;

				x=sum;
				sum=0;
				y=s.size();
			}

			if(sum==1)
				printf("Case #%lld: %lld is a Happy number.\n",i,n);
			else
				printf("Case #%lld: %lld is an Unhappy number.\n",i,n);
		}
	}
	return 0;
}
