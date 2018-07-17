#include<bits/stdc++.h>
using namespace std;

long long power(long long base,long long power)
{
    long long ans=1,i=power;

    while(i--)
        ans*=base;

    return ans;
}

int main()
{
  //  freopen("575i.txt","r",stdin);
  //  freopen("575o.txt","w",stdout);

    string str;
    long long i,j,num;

    while(cin>>str)
    {
        if(str.size()==1&&str[0]=='0')
            return 0;
        else
        {
            j=1,num=0;

            for(i=str.size()-1;i>=0;i--)
            {
                num+=(str[i]-'0')*(power(2,j)-1);
                j++;
            }
            cout<<num<<endl;
        }
    }
    return 0;
}
