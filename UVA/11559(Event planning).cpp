#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("11559i.txt","r",stdin);
    freopen("11559o.txt","w",stdout);

    int n,b,h,w;

    while(cin>>n>>b>>h>>w)
    {
        int max=500001,i,p,j;

        for(i=0;i<h;i++)
        {
            cin>>p;

            int arr[w],count=0;

            for(j=0;j<w;j++)
            {
                cin>>arr[j];

                if(arr[j]>n)
                    count=1;
            }
            if(count==1)
            {
                if(p*n<max)
                    max=p*n;
            }
        }
        if(max>b)
            cout<<"stay home"<<endl;
        else
            cout<<max<<endl;
    }
    return 0;
}


