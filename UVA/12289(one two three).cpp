#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11498i.txt","r",stdin);
   // freopen("11498o.txt","w",stdout);

   int t;
   string s;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>s;

            if(s.size()==5)
                cout<<3<<endl;
            else
            {
                if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
                    cout<<1<<endl;
                else
                    cout<<2<<endl;
            }
        }
    }
   return 0;
}

