#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("11340i.txt","r",stdin);
	//freopen("11340o.txt","w",stdout);

	long long n,k,x,sum,m,ans1,ans2,i;
	double ans;
	char str[10005],ch;

	while(scanf("%lld",&n)!=EOF)
	{
		while(n--)
		{
			vector<pair<long long,long long> >v(256,make_pair(0,0));
			sum=0;

			scanf("%lld",&k);

			while(k--)
			{
				scanf(" %c %lld",&ch,&x);

				v[ch].first=x;
			}

			scanf("%lld",&m);
			getchar();

			while(m--)
			{
				gets(str);

				x=strlen(str);

				for(i=0;i<x;i++)
					v[str[i]].second++;

			//	cout<<m<<endl;
			}

			//cout<<m<<endl;

			for(i=0;i<256;i++)
				sum+=(v[i].first*v[i].second);

			ans=1.0*sum/100;

			printf("%1.2lf$\n",ans);
		}
	}
	return 0;
}
