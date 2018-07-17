#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("10922i.txt","r",stdin);
    freopen("10922o.txt","w",stdout);

    string str;

    while(cin>>str)
    {
        if(str=="0")
            return 0;

        int sum=0,count=0,i,x;

        for(i=0;i<str.size();i++)
        {
            x=str[i]-'0';

            if(x==9)
                count++;

            sum+=x;
        }

        count%=9;

        if(sum%9==0)
            cout<<str<<" is a multiple of 9 and has 9-degree "<<3<<'.'<<endl;
        else
            cout<<str<<" is not a multiple of 9."<<endl;
    }
    return 0;
}

