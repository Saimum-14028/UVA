#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("591i.txt","r",stdin);
  //  freopen("591o.txt","w",stdout);

    int n,i,count=0;

    while(cin>>n)
    {
        if(n==0)
            return 0;

        int arr[n],ans=0,sum=0;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            sum+=arr[i];
        }
        sum/=n;

        for(i=0;i<n;i++)
        {
            if(arr[i]>sum)
                ans+=(arr[i]-sum);
        }

        cout<<"Set #"<<++count<<endl;
        cout<<"The minimum number of moves is "<<ans<<'.'<<endl<<endl;

    }
    return 0;
}


