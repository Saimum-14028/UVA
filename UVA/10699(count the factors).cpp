#include<bits/stdc++.h>
using namespace std;

int divisorcount(int x)
{
    int t=x,y=2;
    set<int>s;

    if(x==1)
        return 1;

    while(x!=1)
    {
        if(x%y==0)
        {
            s.insert(y);
            x=x/y;
        }
        else
            y++;

        if(y*y>t)
        {
            s.insert(t);
                break;
        }
    }
    return s.size();
}

int main()
{
  //  freopen("10699i.txt","r",stdin);
  //  freopen("10699o.txt","w",stdout);

    int n,x;

    while(cin>>n)
    {
        if(n==0)
            return 0;

        x=divisorcount(n);

        cout<<n<<" : "<<x<<endl;
    }
    return 0;
}

