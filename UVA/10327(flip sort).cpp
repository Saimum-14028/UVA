#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10327i.txt","r",stdin);
   // freopen("10327o.txt","w",stdout);

    int n;

    while(cin>>n)
    {
        int count=0,i,j,arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                    count++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    return 0;
}

