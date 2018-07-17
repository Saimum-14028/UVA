#include<bits/stdc++.h>
using namespace std;

vector<int>v2,v4,v6,v8;

int main()
{
	//freopen("256o.txt","w",stdout);

	int i,x,y,n;

	for(i=0;i<10;i++)
	{
		x=i*i;

		y=x/10+x%10;

		if(i==y)
			v2.push_back(x);
	}

	for(i=0;i<100;i++)
	{
		x=i*i;

		y=x/100+x%100;

		if(i==y)
			v4.push_back(x);
	}

	for(i=0;i<1000;i++)
	{
		x=i*i;

		y=x/1000+x%1000;

		if(i==y)
			v6.push_back(x);
	}

	for(i=0;i<10000;i++)
	{
		x=i*i;

		y=x/10000+x%10000;

		if(i==y)
			v8.push_back(x);
	}

	/*cout<<square.size()<<endl;

	for(i=0;i<square.size();i++)
		cout<<square[i]<<endl;*/

	while(scanf("%d",&n)!=EOF)
	{
		if(n==2)
		{
			x=v2.size();

			for(i=0;i<x;i++)
				printf("%02d\n",v2[i]);
		}
		else if(n==4)
		{
			x=v4.size();

			for(i=0;i<x;i++)
				printf("%04d\n",v4[i]);
		}
		else if(n==6)
		{
			x=v6.size();

			for(i=0;i<x;i++)
				printf("%06d\n",v6[i]);
		}
		else
		{
			x=v8.size();

			for(i=0;i<x;i++)
				printf("%08d\n",v8[i]);
		}
	}

	return 0;
}
