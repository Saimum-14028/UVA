#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("278i.txt","r",stdin);
	//freopen("278o.txt","w",stdout);

	int t,n,m,ans;
	char ch;

	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			scanf(" %c %d %d",&ch,&n,&m);

			if(ch=='K')
			{
				ans=ceil(1.0*n/2)*ceil(1.0*m/2);

				printf("%d\n",ans);
			}
			else if(ch=='Q')
			{
				ans=min(n,m);

				printf("%d\n",ans);
			}
			else if(ch=='r')
			{
				ans=min(n,m);

				printf("%d\n",ans);
			}
			else
			{
				ans=ceil(1.0*n*m/2);

				printf("%d\n",ans);
			}
		}
	}
	return 0;
}
