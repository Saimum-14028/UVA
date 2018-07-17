#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,sum,s;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<0)
            return 0;
        else if(n==0)
            cout<<1<<endl;
        else
        {
            if(n%2==0)
            {
                s=n/2;
                sum=s*(n+1)+1;
                cout<<sum<<endl;
            }
            else
            {
                s=(n+1)/2;
                sum=s*n+1;
                cout<<sum<<endl;
            }
        }
    }
    return 0;
}
