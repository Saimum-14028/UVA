#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>n;

            int count=0,i,j,arr[n];

            for(i=0;i<n;i++)
                cin>>arr[i];

            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(arr[i]>arr[j])
                    {
                        swap(arr[i],arr[j]);
                        count++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
        }
    }
    return 0;
}
