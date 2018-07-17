#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >v;

int main()
{
	//freopen("264o.txt","w",stdout);

	v.push_back(make_pair(0,0));
	v.push_back(make_pair(1,1));

	int x=1,i=1,j=1,n;

	while(1)
	{
		if(i==1)
		{
			if(x>=10000000)
				break;

			j++;
			x++;
			v.push_back(make_pair(i,j));

			if(x>=10000000)
				break;

			while(j!=1)
			{
				i++;
				j--;
				x++;
				v.push_back(make_pair(i,j));
			}

			if(x>=10000000)
				break;

			i++;
			x++;
			v.push_back(make_pair(i,j));

			if(x>=10000000)
				break;

			while(i!=1)
			{
				i--;
				j++;
				x++;
				v.push_back(make_pair(i,j));
			}

			if(x>=10000000)
				break;
		}
	}

//	for(i=0;i<101;i++)
		//cout<<i<<' '<<v[i].first<<' '<<v[i].second<<endl;

	while(scanf("%d",&n)!=EOF)
	{
		printf("TERM %d IS %d/%d\n",n,v[n].first,v[n].second);
	}

	return 0;
}
