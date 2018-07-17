#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11461i.txt","r",stdin);
//freopen("11461o.txt","w",stdout);

    long long a,b,ans,x=2147483647;
    char ch;

    while(cin>>a>>ch>>b)
    {
        if(ch=='+')
        {
            ans=a+b;

            cout<<a<<' '<<ch<<' '<<b<<endl;

            if(a>x)
                cout<<"first number too big"<<endl;
            if(b>x)
                cout<<"second number too big"<<endl;
            if(ans>x)
                cout<<"result too big"<<endl;
        }
        else
        {
            int count=0;
            ans=a*b;

            cout<<a<<' '<<ch<<' '<<b<<endl;

            if(a>x)
            {
                cout<<"first number too big"<<endl;
                count++;
            }
            if(b>x)
            {
                cout<<"second number too big"<<endl;
                count++;
            }
            if((count>0||ans>x)&&(a!=0&&b!=0))
                cout<<"result too big"<<endl;
        }
    }
    return 0;
}

