#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("10035i.txt","r",stdin);
    freopen("10035o.txt","w",stdout);

    string s1,s2;

    while(cin>>s1>>s2)
    {
        if(s1=="0"&&s2=="0")
            return 0;

        int i,count=0,carry=0,ans;
        vector<char>v1;
        vector<char>v2;

        if(s1>=s2)
        {
            for(i=s1.size()-1;i>=0;i--)
               v1.push_back(s1[i]);

            for(i=s2.size()-1;i>=0;i--)
               v2.push_back(s2[i]);

            for(i=s1.size()-s2.size();i>0;i--)
               v2.push_back('0');

            for(i=0;i<v1.size();i++)
            {
                v1[i]=v1[i]-'0';
                v2[i]=v2[i]-'0';

                ans=v1[i]+v2[i]+carry;

                carry=0;

             //  cout<<ans<<' ';

                if(ans>9)
                {
                    count++;
                    carry=1;
                }
            }
        }
        else
        {
            for(i=s1.size()-1;i>=0;i--)
               v1.push_back(s1[i]);

            for(i=s2.size()-1;i>=0;i--)
               v2.push_back(s2[i]);

            for(i=s2.size()-s1.size();i>0;i--)
               v1.push_back('0');

            for(i=0;i<v1.size();i++)
            {
                v1[i]=v1[i]-'0';
                v2[i]=v2[i]-'0';

                ans=v1[i]+v2[i]+carry;

                carry=0;

             //   cout<<ans<<' ';

                if(ans>9)
                {
                    count++;
                    carry=1;
                }
            }
        }

        if(count==0)
            cout<<"No carry operation."<<endl;
        else if(count==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<count<<" carry operations."<<endl;
    }
    return 0;
}



