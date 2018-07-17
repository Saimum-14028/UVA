#include<bits/stdc++.h>
using namespace std;

int main()
{
  ///  freopen("10929i.txt","r",stdin);
  ///  freopen("10929o.txt","w",stdout);

    string str;

    while(cin>>str)
    {
        if(str=="0")
            return 0;

        int sum=0,i,x;

        for(i=0;i<str.size();i++)
        {
            x=str[i]-'0';

            if(i%2)
                sum-=x;
            else
                sum+=x;
        }

        if(sum%11==0)
            cout<<str<<" is a multiple of 11."<<endl;
        else
            cout<<str<<" is not a multiple of 11."<<endl;
    }
    return 0;
}


