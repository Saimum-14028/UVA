#include<bits/stdc++.h>
using namespace std;

multimap<long long,long long>edge;
map<long long,long long>level;
set<long long>visited;

long long BFS(long long source,long long limit)
{
	level.clear();

	queue<long long>sources;
	long long ck,x,count=1;

	sources.push(source);
	level[source]=1;

	while(sources.empty()==false)
	{
		ck=sources.front();
		sources.pop();

		multimap<long long,long long>::iterator it;

		for(it=edge.lower_bound(ck);it!=edge.upper_bound(ck);it++)
		{
			x=it->second;

			if(level[x]==0)
			{
				level[x]=level[ck]+1;

				sources.push(x);

				if(level[x]<=limit)
					count++;
			}
		}
	}

	return count;
}

int main()
{
	//freopen("336i.txt","r",stdin);
	//freopen("336o.txt","w",stdout);

	long long z=0,E,ans,i,x,y,a;

	while(scanf("%lld",&E)!=EOF)
	{
		a=0;

		if(E==0)
			return 0;

		for(i=1;i<=E;i++)
		{
			scanf("%lld %lld",&x,&y);

			edge.insert(make_pair(x,y));
			edge.insert(make_pair(y,x));

			visited.insert(x);
			visited.insert(y);
		}

		//cout<<a<<endl;

		while(scanf("%lld %lld",&x,&y))
		{
			if(x==0&&y==0)
				break;

			set<long long>::iterator it;

			it=visited.find(x);

			if(it!=visited.end())
				ans=visited.size()-BFS(x,y+1);
			else
				ans=visited.size()-BFS(x,y+1)+1;

			printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",++z,ans,x,y);
		}

		edge.clear();
		visited.clear();
	}
	return 0;
}
