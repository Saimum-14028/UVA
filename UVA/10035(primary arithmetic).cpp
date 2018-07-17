#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10035i.txt","r",stdin);
  //  freopen("10035o.txt","w",stdout);

    string s1,s2;

    while(cin>>s1>>s2)
    {
        if(s1=="0"&&s2=="0")
            return 0;

        int i,count=0,carry=0,ans;
        vector<char>s3;

        if(s1>=s2)
        {
            for(i=0;i<s1.size();i++)
            {
                if(i<s1.size()-s2.size())
                    s3.push_back('0');
                else
                    s3.push_back(s2[i-(s1.size()-s2.size())]);

               cout<<s3[i]<<' ';
            }

//            cout<<s1<<' '<<s3<<endl;

            for(i=s3.size()-1;i>=0;i--)
            {
                ans=(s3[i]-48)+(s1[i]-48)+carry;

                cout<<ans<<' ';

                if(ans>9)
                {
                    count++;
                    carry=ans/10;
                }
            }
        }
        else
        {
            for(i=0;i<s2.size();i++)
            {
                if(i<s2.size()-s1.size())
                    s3.push_back('0');
                else
                    s3.push_back(s1[i-(s2.size()-s1.size())]);

                cout<<s3[i]<<' ';
            }

       //     cout<<s3<<' '<<s2<<endl;

            for(i=s3.size()-1;i>=0;i--)
            {
                ans=(s3[i]-48)+(s2[i]-48)+carry;

                cout<<ans<<' ';

                if(ans>9)
                {
                    count++;
                    carry=ans/10;
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


