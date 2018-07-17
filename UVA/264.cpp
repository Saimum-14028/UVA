#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("264o.txt","w",stdout);

	int x,i,j,n;

	while(scanf("%d",&n)!=EOF)
	{
		x=1,i=1,j=1;

		while(1)
		{
			if(i==1)
			{
				if(x==n)
					break;

				j++;
				x++;

				if(x==n)
					break;

				while(j!=1)
				{
					i++;
					j--;
					x++;

					if(x==n)
					break;
				}

				if(x==n)
					break;

				i++;
				x++;

				if(x==n)
					break;

				while(i!=1)
				{
					i--;
					j++;
					x++;

					if(x==n)
					break;
				}

				if(x==n)
					break;
			}
		}

		printf("TERM %d IS %d/%d\n",n,i,j);
	}

	return 0;
}

