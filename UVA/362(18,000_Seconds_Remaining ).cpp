#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("362i.txt","r",stdin);
	freopen("362o.txt","w",stdout);

	int n,i=1,x;

	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0;

        if(i>1)
            printf("\n");

		int sum=0,j=0,k=0,ans;
		double dum=0;

		printf("Output for data set %d, %d bytes:\n",i++,n);

		while(sum<n)
		{
			scanf("%d",&x);

			sum+=x;
			dum+=x;

			j++,k++;

			if(j==5)
			{
				dum=dum/5;

				if(dum!=0)
				{
					ans=ceil(1.0*(n-sum)/dum);

					printf("   Time remaining: %d seconds\n",ans);
				}
				else
				{
					printf("   Time remaining: stalled\n");
				}

				j=0,dum=0;
			}
		}

		printf("Total time: %d seconds\n",k);
	}
	return 0;
}
