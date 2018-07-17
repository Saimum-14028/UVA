#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("272i.txt","r",stdin);
   // freopen("272o.txt","w",stdout);

    char str[1000001];
    int i,c=0;

    while(cin.getline(str,sizeof(str)))
    {
        vector<char>v;

        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='"')
            {
                if(c%2)
                {
                    v.push_back(39);
                    v.push_back(39);
                }
                else
                {
                    v.push_back(96);
                    v.push_back(96);
                }
                c++;
            }
            else
                v.push_back(str[i]);
        }
        for(i=0;i<v.size();i++)
            cout<<v[i];
        cout<<endl;
    }
    return 0;
}
