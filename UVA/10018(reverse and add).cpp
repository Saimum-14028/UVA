#include<bits/stdc++.h>
using namespace std;

long long reverse(long long n)
{
    long long x=0;

    while(n!=0)
    {
        x=x*10+n%10;
        n/=10;
    }
    return x;
}

int main()
{
   // freopen("10018i.txt","r",stdin);
   // freopen("10018o.txt","w",stdout);

    long long t,x,y,count;

    while(cin>>t)
    {
        while(t--)
        {
            count=1;

           cin>>x;

           y=reverse(x);
           x+=y;
           y=reverse(x);

           while(x!=y)
           {
               count++;
               x+=y;
               y=reverse(x);
           }

           cout<<count<<' '<<x<<endl;
        }
    }
    return 0;
}

