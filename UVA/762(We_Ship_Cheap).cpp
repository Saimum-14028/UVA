#include<bits/stdc++.h>
using namespace std;

multimap<string,string>edge;
map<string,string>parent;
map<string,int>level;


int BFS(string source,string des)
{
	parent.clear();
	level.clear();

	queue<string>sources;
	string ck,x;

	sources.push(source);
	level[source]=1;
	parent[source]="-1";

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		if(ck==des)
			break;

		multimap<string,string>::iterator it;

		for(it=edge.lower_bound(ck);it!=edge.upper_bound(ck);it++)
		{
			x=it->second;

			if(level[x]==0)
			{
				level[x]=level[ck]+1;

				parent[x]=ck;

				sources.push(x);
			}
		}
	}
	return level[des];
}

int main()
{
	//freopen("762i.txt","r",stdin);
	//freopen("762o.txt","w",stdout);

	int t,ans,i,a=-1;
	string s1,s2,x;

	while(scanf("%d",&t)!=EOF)
	{
		if(++a)
			printf("\n");

		while(t--)
		{
			cin>>s1>>s2;

			edge.insert(make_pair(s1,s2));
			edge.insert(make_pair(s2,s1));
		}

		cin>>s1>>s2;

		ans=BFS(s1,s2);

		if(ans==0)
			printf("No route\n");
		else
		{
			vector<pair<string,string> >path;

			x=parent[s2];

			path.push_back(make_pair(x,s2));

			while(1)
			{
				if(parent[x]=="-1")
					break;

				path.push_back(make_pair(parent[x],x));

				//printf("%d ",x);

				x=parent[x];
			}

			for(i=path.size()-1;i>=0;i--)
				cout<<path[i].first<<' '<<path[i].second<<endl;
		}

		edge.clear();
	}
	return 0;
}
