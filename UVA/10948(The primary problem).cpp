#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

int main()
{
  //  freopen("10948i.txt","r",stdin);
 //   freopen("10948o.txt","w",stdout);

    int i,j,n;

    prime[1]=1;

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

        for(i=2;i<n;i++)
        {
            if(prime[i]==0&&(i==2||i%2!=0))
            {
                if(prime[n-i]==0&&(n-i==2||(n-i)%2!=0))
                {
                    cout<<n<<':'<<endl;
                    cout<<i<<"+"<<n-i<<endl;
                    break;
                }
            }
        }
        if(i==n)
            cout<<n<<':'<<endl<<"NO WAY!"<<endl;
    }
    return 0;
}
