#include<bits/stdc++.h>
using namespace std;

vector<int>divisor[32768];

int main()
{
	//freopen("412i.txt","r",stdin);
	//freopen("412o.txt","w",stdout);

	int n,i,j;

	for(i=2;i<32768;i++)
	{
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				divisor[i].push_back(j);

				if(j*j!=i)
					divisor[i].push_back(i/j);
			}
		}
		divisor[i].push_back(i);
	}

	/*for(i=0;i<32768;i++)
	{
		cout<<i<<' '<<divisor[i].size()<<endl;
	}*/

	while(scanf("%d",&n)!=EOF)
	{
		int count=0,arr[n],k;

		if(n==0)
			return 0;

		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);

		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				set<int>s;

				for(k=0;k<divisor[arr[i]].size();k++)
					s.insert(divisor[arr[i]][k]);

				for(k=0;k<divisor[arr[j]].size();k++)
					s.insert(divisor[arr[j]][k]);

				if(divisor[arr[i]].size()+divisor[arr[j]].size()==s.size())
					count++;

			///	cout<<divisor[arr[i]].size()<<' '<<divisor[arr[j]].size()<<' '<<s.size()<<endl;
			}
		}

		///cout<<count<<endl;

		if(count>0)
		{
			double ans;

			ans=sqrt(6.0*n*(n-1)/(2*count));

			printf("%lf\n",ans);
		}
		else
			printf("No estimate for this data set.\n");

	}
	return 0;
}
