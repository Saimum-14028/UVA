#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10070i.txt","r",stdin);
  //  freopen("10070o.txt","w",stdout);

    long long y,count=0,c,k,i;
    string s;

    while(cin>>s)
    {
        c=0,k=0;

        if(count>0)
            cout<<endl;

        y=(s[s.size()-4]-'0')*1000+(s[s.size()-3]-'0')*100+(s[s.size()-2]-'0')*10+(s[s.size()-1]-'0');

        if(y%400==0||(y%100!=0&&y%4==0))
        {
            cout<<"This is leap year."<<endl;
            c=1;
            y=0;

            for(i=0;i<s.size();i++)
            {
                if(i%2)
                    y-=(s[i]-'0');
                else
                    y+=(s[i]-'0');
            }
            if(y%11==0&&(s[s.size()-1]=='0'||s[s.size()-1]=='5'))
            {
                c=1;
                k=1;
            }
        }

        y=0;

        for(i=0;i<s.size();i++)
        {
            y+=(s[i]-'0');
        }

        if(y%3==0&&(s[s.size()-1]=='0'||s[s.size()-1]=='5'))
        {
            cout<<"This is huluculu festival year."<<endl;
            c=1;
        }

        if(k==1)
            cout<<"This is bulukulu festival year."<<endl;

        if(c==0)
            cout<<"This is an ordinary year."<<endl;

        count++;
    }
    return 0;
}


