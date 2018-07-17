#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x,n;

	while(scanf("%lld",&n)!=EOF)
	{
		x=1;

		int cnt=0;

		while(x<n)
		{
			if(cnt%2)
				x*=2;
			else
				x*=9;

			cnt++;
		}

		if(cnt%2)
			printf("Stan wins.\n");
		else
			printf("Ollie wins.\n");
	}
	return 0;
}
