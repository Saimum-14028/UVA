#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11498i.txt","r",stdin);
   // freopen("11498o.txt","w",stdout);

    int k,x,y,a,b;

    while(cin>>k)
    {
        cin>>x>>y;

        while(k--)
        {
            cin>>a>>b;

            if(x==a||y==b)
                cout<<"divisa"<<endl;
            else if(a<x&&b>y)
                cout<<"NO"<<endl;
            else if(a>x&&b>y)
                cout<<"NE"<<endl;
            else if(a>x&&b<y)
                cout<<"SE"<<endl;
            else
                cout<<"SO"<<endl;
        }
    }
    return 0;
}
