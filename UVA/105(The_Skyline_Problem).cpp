#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("105i.txt","r",stdin);
	//freopen("105o.txt","w",stdout);

	int mark[10001],arr[10001];
	int l,h,r,max=-1,min=10001,i;

	memset(mark,-1,sizeof mark);

	while(scanf("%d %d %d",&l,&h,&r)!=EOF)
	{
		for(i=l;i<r;i++)
		{
			if(mark[i]<h)
				mark[i]=h;
		}

		if(r>max)
			max=r;

		if(l<min)
			min=l;
	}

	for(i=min;i<max;i++)
	{
		if(i==min)
			printf("%d %d",i,mark[i]);
		else if(mark[i]==-1&&mark[i-1]!=-1)
			printf(" %d 0",i);
		else
		{
			if(mark[i]!=mark[i-1])
				printf(" %d %d",i,mark[i]);
		}
	}

	printf(" %d 0\n",i);

	return 0;
}
