#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

int reverse(int x)
{
    int y,ans=0;

    while(x!=0)
    {
        y=x%10;
        ans=ans*10+y;
        x=x/10;
    }
    return ans;
}

int main()
{
    //freopen("10235i.txt","r",stdin);
  //  freopen("10235o.txt","w",stdout);

    int i,j,n,x;

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
        if(prime[n]!=0)
            cout<<n<<" is not prime."<<endl;
        else
        {
            if(n>2&&n%2==0)
                cout<<n<<" is not prime."<<endl;
            else
            {
                x=reverse(n);

                if(prime[x]==0&&x%2!=0&&x!=n)
                    cout<<n<<" is emirp."<<endl;
                else
                    cout<<n<<" is prime."<<endl;
            }
        }
    }
    return 0;
}
