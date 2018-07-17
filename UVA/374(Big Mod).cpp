#include<bits/stdc++.h>
using namespace std;

long long Bigmod(long long b,long p,long long M)
{
    if(p==0)
        return 1%M;

    long long x=Bigmod(b,p/2,M);

    x=x*x%M;

    if(p%2)
        x=x*b%M;

    return x;
}

int main()
{
  //  freopen("374i.txt","r",stdin);
  //  freopen("374o.txt","w",stdout);

    long long b,p,m;

    while(cin>>b>>p>>m)
    {
        cout<<Bigmod(b,p,m)<<endl;
    }
    return 0;
}
