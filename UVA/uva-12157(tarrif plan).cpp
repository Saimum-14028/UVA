#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,x,i,j,k,m,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        m=0,j=0;
        cin>>n;
        cout<<"Case "<<i;
        for(k=0;k<n;k++)
        {
            cin>>x;
            a=x/30;
            b=x/60;
            if(x<30)
                m=m+1;
            else
                m=m+a+1;
            if(x<60)
                j=j+1;
            else
                j=j+b+1;
        }
        m=m*10;
        j=j*15;
        if(m>j)
            cout<<": Juice "<<j<<endl;
        else if(m<j)
            cout<<": Mile "<<m<<endl;
        else
            cout<<": Mile Juice "<<m<<endl;
    }
    return 0;
}
