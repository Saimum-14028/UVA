#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("12372i.txt","r",stdin);
   // freopen("12372o.txt","w",stdout);

    int x,y,z,t,i;

    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>x>>y>>z;

            if(x<=20&&y<=20&&z<=20)
                cout<<"Case "<<i<<": good"<<endl;
            else
               cout<<"Case "<<i<<": bad"<<endl;
        }
    }
    return 0;
}

