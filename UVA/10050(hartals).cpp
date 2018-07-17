#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10050i.txt","r",stdin);
  //  freopen("10050o.txt","w",stdout);

    int t,n,i,p,x;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;
            cin>>p;

            int arr[n+1]={0},count=0;

            while(p--)
            {
                cin>>x;

                for(i=x;i<n+1;i+=x)
                    arr[i]=1;
            }

            for(i=1;i<n+1;i++)
            {
                //cout<<arr[i]<<' ';

                if(i%7!=0&&i%7!=6)
                {
                    if(arr[i]==1)
                        count++;
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}

