#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,ans;

	while(scanf("%lld",&t)!=EOF)
	{
		while(t--)
		{
			scanf("%lld",&n);

			long long low=1;
			long long high=1500000000;
			long long mid=(low+high)/2;
			ans=0;

			while(low<=high)
			{
				ans=mid*(mid+1)/2;

				if(ans<n)
					low=mid+1;
				else if(ans>n)
					high=mid-1;
				else
					break;

				mid=(low+high)/2;

				//cout<<low<<' '<<mid<<' '<<high<<endl;
			}

			printf("%lld\n",mid);
		}
	}
	return 0;
}
