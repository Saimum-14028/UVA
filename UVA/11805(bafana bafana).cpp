#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11805i.txt","r",stdin);
   // freopen("11805o.txt","w",stdout);

    long long t,i,n,k,p,x;

    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n>>k>>p;

            x=p%n;
            x=x+k;

            if(x>n)
                x=x-n;

            cout<<"Case "<<i<<": "<<x<<endl;
        }
    }
    return 0;
}


