#include<bits/stdc++.h>
using namespace std;

int arr[26];

int main()
{
	//freopen("1729i.txt","r",stdin);
	//freopen("1729o.txt","w",stdout);

	int t,i,j,x;
	char str[100005];

    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
		{
			memset(arr,0,sizeof(arr));

			scanf("%s",str);

			x=strlen(str);

			for(j=0;j<x;j++)
			{
				arr[str[j]-'a']++;
			}

			sort(arr,arr+26);

			printf("Case %d: %d\n",i,arr[0]);
		}
    }
    return 0;
}
