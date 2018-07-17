#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

int main()
{
   // freopen("543i.txt","r",stdin);
  //  freopen("543o.txt","w",stdout);

    int i,j,n;

    for(i=3;i*i<1000000;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<1000000;j+=i)
                prime[j]=1;
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

        for(i=3;i<n;i+=2)
        {
            if(prime[i]==0)
            {
                if(prime[n-i]==0)
                    break;
            }
        }
        cout<<n<<" = "<<i<<" + "<<n-i<<endl;
    }
    return 0;
}


