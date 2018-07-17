#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("12403i.txt","r",stdin);
   // freopen("12403o.txt","w",stdout);

    int x,t,i,sum;
    string str;

    while(cin>>t)
    {
        sum=0;

        for(i=1;i<=t;i++)
        {
            cin>>str;

            if(str=="donate")
            {
                cin>>x;

                sum+=x;
            }
            else
                cout<<sum<<endl;
        }
    }
    return 0;
}

