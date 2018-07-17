#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10340i.txt","r",stdin);
  //  freopen("10340o.txt","w",stdout);

    string s,t;

    while(cin>>s>>t)
    {
        int i=0,j=0;

        while(i<s.size())
        {
            while(j<t.size())
            {
                if(s[i]==t[j])
                {
                    i++;
                    j++;
                    break;
                }
                else
                    j++;
            }
            if(j==t.size())
                break;
        }

        if(i==s.size())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
