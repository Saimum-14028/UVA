#include<bits/stdc++.h>
using namespace std;

int main()
{
//	freopen("10035i.txt","r",stdin);
 //   freopen("10035o.txt","w",stdout);

	long long x,y;

	while(scanf("%lld %lld",&x,&y)!=EOF)
	{
		long long a,b,c=0,count=0;

		if(x==0&&y==0)
			return 0;

		while(x!=0||y!=0)
		{
			a=x%10;
			b=y%10;
			c=(a+b+c)/10;

			x=x/10;
			y=y/10;

			count+=c;
		}

		if(count==0)
			printf("No carry operation.\n");
		else if(count==1)
			printf("1 carry operation.\n");
		else
			printf("%lld carry operations.\n",count);
	}
	return 0;
}
