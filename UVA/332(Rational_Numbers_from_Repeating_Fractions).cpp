#include<bits/stdc++.h>
using namespace std;

long long power(long long n)
{
	long long x=1;

	while(n--)
		x=x*10;

	return x;
}

long long digit(double x)
{
	stringstream s;

	s<<abs(x-int(x));

	string num;
	s>>num;

	return num.size()-2;
}

int main()
{
	freopen("332i.txt","r",stdin);
	freopen("332o.txt","w",stdout);

	long long j,a,b,c,i=0;
	double x;

	while(scanf("%lld",&j)!=EOF)
	{
		if(j==-1)
			return 0;

		scanf("%lf",&x);

		cout<<x<<endl;

		long long count =digit(x);

		cout<<count<<endl;
		a=ceil((power(count)*x)-(power(count-j)*x));
		cout<<1<<endl;
		b=power(count)-power(count-j);

		//cout<<a<<' '<<b<<endl;

		c=__gcd(a,b);

		a=a/c;
		b=b/c;

		printf("Case %lld: %lld/%lld\n",++i,a,b);
	}
	return 0;
}
