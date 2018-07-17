#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("673i.txt","r",stdin);
  //  freopen("673o.txt","w",stdout);

    char str[130];
    int n;

    cin>>n;
    getchar();

    while(n--)
    {
        gets(str);

        stack<char>s;
        int len=strlen(str),i;

        for(i=0;i<len;i++)
        {
            if(str[i]=='('||str[i]=='[')
                s.push(str[i]);
            else
            {
                if(s.empty()==true)
                    break;
                else if(str[i]==')')
                {
                    if(s.top()!='(')
                        break;
                    else
                        s.pop();
                }
                else
                {
                    if(s.top()!='[')
                        break;
                    else
                        s.pop();
                }
            }
        }
        if(i==len)
        {
            if(s.empty())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
