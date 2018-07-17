#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
       return gcd(b,a%b);
}

int main()
{
 //   freopen("11417i.txt","r",stdin);
  //  freopen("11417o.txt","w",stdout);

    int n,i,j;

    while(cin>>n)
    {
        if(n==0)
            return 0;

        int sum=0;

        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
                sum+=gcd(i,j);
        }
        cout<<sum<<endl;
    }
    return 0;
}
