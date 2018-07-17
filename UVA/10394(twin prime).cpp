#include<bits/stdc++.h>
using namespace std;

int main()
{
 //   freopen("10394i.txt","r",stdin);
//    freopen("10394o.txt","w",stdout);

    int i,j,n;
    vector<pair<int,int> >v;
    vector<int>prime(18409202,0);

    prime[1]={1};

    for(i=3;i*i<18409202;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<18409202;j+=i)
                prime[j]=1;

            if(prime[i-2]==0)
                v.push_back(make_pair(i-2,i));
        }
    }

//    cout<<i<<endl;

    for(j=i;j<18409202;j+=2)
    {
        if(prime[j]==0&&prime[j-2]==0)
            v.push_back(make_pair(j-2,j));

    //    cout<<prime[j]<<' '<<j<<endl;
    }

  //  cout<<v.size()<<endl;
  /*  for(i=0;i<prime.size();i++)
    {
        cout<<i<<' '<<prime[i]<<endl;
    }*/

    while(cin>>n)
    {
        cout<<'('<<v[n-1].first<<", "<<v[n-1].second<<')'<<endl;
    }
    return 0;
}
