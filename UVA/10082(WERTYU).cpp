#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10082i.txt","r",stdin);
  //  freopen("10082o.txt","w",stdout);

    string s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char str[100005];

    while(gets(str))
    {
        int a=strlen(str),j,i;

        for(i=0;i<a;i++)
        {
            if(str[i]!=' ')
            {
                for(j=0;j<s.size();j++)
                {
                    if(str[i]==s[j])
                    {
                        str[i]=s[j-1];
                        break;
                    }
                }
            }
        }
        cout<<str<<endl;
    }
    return 0;
}

