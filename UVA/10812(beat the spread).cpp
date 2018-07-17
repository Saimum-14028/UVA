#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10812i.txt","r",stdin);
  //  freopen("10812o.txt","w",stdout);

    long long t,s,d,x,y;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>s>>d;

            if(s<d)
                cout<<"impossible"<<endl;
            else
            {
                x=(s+d)/2;
                y=(s-d)/2;

                if(x+y==s)
                    cout<<x<<' '<<y<<endl;
                else
                  cout<<"impossible"<<endl;
            }
        }
    }
    return 0;
}
