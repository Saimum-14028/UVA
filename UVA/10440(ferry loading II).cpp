#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10440i.txt","r",stdin);
  //  freopen("10440o.txt","w",stdout);

    int c,t,n,m,i,ans1,ans2,temp1,temp2;
    while(cin>>c)
    {
        while(c--)
        {
            cin>>n>>t>>m;

            int arr[m];

            for(i=0;i<m;i++)
                cin>>arr[i];

            sort(arr,arr+m);

            ans1=ceil(m*1.0/n);

            if(m%n==0)
            {
                temp1=arr[n-1]+(m/n-1)*2*t+t;
                temp2=arr[m-1]+t;

                if(temp1>=temp2)
                    ans2=temp1;
                else
                    ans2=temp2;
            }
            else
            {
                temp1=arr[m%n-1]+(m/n)*2*t+t;
                temp2=arr[m-1]+t;

                if(temp1>=temp2)
                    ans2=temp1;
                else
                    ans2=temp2;
            }
            cout<<ans2<<" "<<ans1<<endl;
        }
    }
    return 0;
}
