#include<bits/stdc++.h>
using namespace std;

map<string,int>kw;

int main()
{
	//freopen("409i.txt","r",stdin);
	//freopen("409o.txt","w",stdout);

	int k,e,i,j,a=0;

	while(scanf("%d %d",&k,&e)!=EOF)
	{
		string s,str[e];
		int max=-1,cnt[e];

		memset(cnt,0,sizeof cnt);

		for(i=0;i<k;i++)
		{
			cin>>s;
			kw[s]=-1;
			///cout<<kw[s]<<endl;
		}

		getchar();

		for(i=0;i<e;i++)
		{
			getline(cin,str[i]);

			string temp="";

			for(j=0;j<str[i].size();j++)
			{
				if((str[i][j]>47&&str[i][j]<58)||(str[i][j]>96&&str[i][j]<123))
					temp+=str[i][j];
				else if((str[i][j]>64&&str[i][j]<91))
					temp+=tolower(str[i][j]);
				else
					temp+=' ';
			}

		  ///  cout<<str[i]<<endl<<temp<<endl;

			stringstream sin(temp);
			string token;

			while(sin>>token)
			{
			///	cout<<token<<endl;
				if(kw[token]==-1)
					cnt[i]++;
			}

		///	cout<<cnt[i]<<' '<<max<<endl;

			if(cnt[i]>max)
				max=cnt[i];
		}

		printf("Excuse Set #%d\n",++a);

		for(i=0;i<e;i++)
		{
			if(cnt[i]==max)
				cout<<str[i]<<endl;
		}

		printf("\n");

		kw.clear();
	}
	return 0;
}
