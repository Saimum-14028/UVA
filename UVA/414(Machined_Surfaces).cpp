#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("414i.txt","r",stdin);
	//freopen("414o.txt","w",stdout);

	int n,i;

	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			return 0;

		string str[n];
		int cnt[n],sum=0,max=25,j;

		memset(cnt,0,sizeof cnt);

		getchar();

		for(i=0;i<n;i++)
		{
			getline(cin,str[i]);

			for(j=0;j<25;j++)
			{
				if(str[i][j]==' ')
					cnt[i]++;
			}

			if(cnt[i]<max)
				max=cnt[i];
		}

		for(i=0;i<n;i++)
			sum+=cnt[i]-max;

		printf("%d\n",sum);
	}
	return 0;
}
