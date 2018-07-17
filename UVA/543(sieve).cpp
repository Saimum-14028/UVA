#include<bits/stdc++.h>
using namespace std;

int arr[1000001];

int main()
{
   // freopen("543i.txt","r",stdin);
  //  freopen("543o.txt","w",stdout);

    vector<int>prime;
    int i,j,n;

    prime.push_back(2);

    for(i=3;i<1000000;i+=2)
    {
        if(arr[i]==0)
        {
            prime.push_back(i);

            for(j=i+i;j<1000000;j+=i)
                arr[j]=1;
        }
    }

  /*  for(i=0;i<prime.size();i++)
    {
        cout<<i<<' '<<prime[i]<<endl;
    }*/

    while(cin>>n)
    {
        if(n==0)
            return 0;

        int i=0,j=prime.size()-1;

        while(1)
        {
            if(prime[i]+prime[j]==n)
                break;
            if(prime[i]+prime[j]>n)
                j--;
            if(prime[i]+prime[j]<n)
                i++;
        }
        cout<<n<<" = "<<prime[i]<<" + "<<prime[j]<<endl;
    }
    return 0;
}

