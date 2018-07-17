#include<bits/stdc++.h>
using namespace std;

multimap<string,string>edges;
map<string,int>cnt;
string str[100];
int N,M;

void topsort()
{
	multimap<string,string>::iterator it;
	int k=0,i;

	while(1)
	{
		if(k==N)
		{
			printf(".\n");
			return;
		}

		for(i=0;i<N;i++)
		{
			if(cnt[str[i]]==0)
			{
				cnt[str[i]]=-1;
				break;
			}
		}

		cout<<' '<<str[i];

		for(it=edges.lower_bound(str[i]);it!=edges.upper_bound(str[i]);it++)
		{
			cnt[it->second]--;
		}

		k++;
	}
}

int main()
{
	//freopen("11060i.txt","r",stdin);
	//freopen("11060o.txt","w",stdout);

	int i,a=0;
	string x,y;

	while(scanf("%d",&N)!=EOF)
	{
		for(i=0;i<N;i++)
			cin>>str[i];

		scanf("%d",&M);

		for(i=0;i<M;i++)
		{
			cin>>x>>y;

			edges.insert(make_pair(x,y));
			cnt[y]++;
		}

		printf("Case #%d: Dilbert should drink beverages in this order:",++a);

		topsort();

		printf("\n");

		edges.clear();
		cnt.clear();

		for(i=0;i<N;i++)
			str[i].clear();
	}
	return 0;
}
