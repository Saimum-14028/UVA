#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10450i.txt","r",stdin);
  //  freopen("10450o.txt","w",stdout);

    long long t,i,n;
    vector<long long>v;

    v.push_back(2);
    v.push_back(3);

    for(i=2;i<90;i++)
        v.push_back(v[i-1]+v[i-2]);

 //   for(i=0;i<v.size();i++)
   //     cout<<i<<endl<<v[i]<<endl;

    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;

            cout<<"Scenario #"<<i<<":"<<endl;
            cout<<v[n-1]<<endl<<endl;
        }
    }
    return 0;
}
