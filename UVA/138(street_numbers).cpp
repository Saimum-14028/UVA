#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long i=0,x=2,a,b;

	/*while(i<10)
	{
		a=ceil(sqrt((x*x+x)/2));
		b=floor(sqrt((x*x+x)/2));

		if(a==b)
		{
			printf("%lld,%lld,",a,x);
			i++;
		}
		x++;
	}*/

	long long arr[20]={6,8,35,49,204,288,1189,1681,6930,9800,40391,57121,235416,332928,1372105,1940449,7997214,11309768,46611179,65918161};

	for(i=0;i<20;i+=2)
		printf("%10lld%10lld\n",arr[i],arr[i+1]);

	return 0;
}
