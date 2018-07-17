#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11875i.txt","r",stdin);
    //freopen("11875o.txt","w",stdout);

    long long t,i,n,y,x,j;

    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;

            for(j=0;j<n;j++)
            {
                cin>>x;

                if(j==(n-1)/2)
                    y=x;
            }

            cout<<"Case "<<i<<": "<<y<<endl;
        }
    }
    return 0;
}
