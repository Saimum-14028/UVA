#include<bits/stdc++.h>
using namespace std;

long long revers(long long m)
{
	long long n=0,r;
	while(m>0)
	{
		r=m%10;
		n=(n*10)+r;
		m=m/10;

	}
    return n;
}

int main ()
{
    freopen("10018i.txt","r",stdin);
    freopen("10018o.txt","w",stdout);

	long long m,l,cs,T;
	scanf("%lld",&T);
	while(T--){
     cs=0;
   scanf("%lld",&m);
	while(1)

		{
			l=revers(m);
			if(l==m)

				{
					printf("%lld %lld\n",cs,m);
					break;
				}
               else
			   {
			   	m=m+l;
			   	cs++;
			   }
		}

}
    return 0;
}
