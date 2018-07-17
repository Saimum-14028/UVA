#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11723i.txt","r",stdin);
   // freopen("11723o.txt","w",stdout);

    int r,n,ans,count=0;

    while(cin>>r>>n)
    {
        if(r==0&&n==0)
            return 0;

        ans=r-n;
        ans=ceil(1.0*ans/n);

        if(ans>26)
            cout<<"Case "<<++count<<": impossible"<<endl;
        else
            cout<<"Case "<<++count<<": "<<ans<<endl;
    }
    return 0;
}
