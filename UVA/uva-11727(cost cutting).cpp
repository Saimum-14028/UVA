#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,a,b,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b>>c;
        cout<<"Case "<<i<<": ";
        if(a>b)
        {
            if(b>c)
                cout<<b<<endl;
            else
            {
                if(a>c)
                    cout<<c<<endl;
                else
                    cout<<a<<endl;
            }
        }
        else
        {
            if(b<c)
                cout<<b<<endl;
            else
            {
                if(a>c)
                    cout<<a<<endl;
                else
                    cout<<c<<endl;
            }
        }
    }
    return 0;
}
