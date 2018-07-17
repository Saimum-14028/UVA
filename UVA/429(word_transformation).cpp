#include<bits/stdc++.h>
using namespace std;

multimap<string,string>edge;
map<string,int>level;

int BFS(string source,string des)
{
	level.clear();

	queue<string>sources;
	string ck,x;

	sources.push(source);
	level[source]=1;

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

				sources.push(x);
			}
		}
	}
	return level[des];
}

int main()
{
	//freopen("429i.txt","r",stdin);
	//freopen("429o.txt","w",stdout);

	int t,i,a,x,j,count,b=-1,ans;

	while(scanf("%d",&t)!=EOF)
	{
		if(++b)
			printf("\n");

		a=0;

		string s[200],str,line,start,stop;

		while(cin>>str)
		{
			if(str=="*")
				break;

			for(i=0;i<a;i++)
			{
				count=0;

				if(str.size()==s[i].size())
				{
					x=str.size();

					for(j=0;j<x;j++)
					{
						if(str[j]!=s[i][j])
							count++;

						if(count>1)
							break;
					}

					if(j==x)
					{
						edge.insert(make_pair(str,s[i]));
						edge.insert(make_pair(s[i],str));

						//cout<<str<<' '<<s[i]<<endl;
					}
				}
			}
			s[a++]=str;
		}

	/*	for(i=0;i<a;i++)
			cout<<s[i]<<endl;*/

		cin.ignore();

		while (getline(cin, line) && line != "")
        {
            stringstream ss(line);

            ss >> start >> stop;

			ans=BFS(start,stop)-1;

			cout<<start<<' '<<stop<<' '<<ans<<endl;
        }
        edge.clear();
	}
	return 0;
}
