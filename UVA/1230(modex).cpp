#include<bits/stdc++.h>
using namespace std;

long long Bigmod(long long a,long long b,long long M)
{
    if(b==0)
        return 1%M;

    long long x=Bigmod(a,b/2,M);

    x=x*x%M;

    if(b%2)
        x=x*a%M;

    return x;
}


int main()
{
  //  freopen("1230i.txt","r",stdin);
 //   freopen("1230o.txt","w",stdout);

    long long n,c,x,y,z;

    while(cin>>c)
    {
        if(c==0)
            return 0;

        while(c--)
        {
            cin>>x>>y>>n;

            z=Bigmod(x,y,n);

            cout<<z<<endl;
        }
    }
    return 0;
}
