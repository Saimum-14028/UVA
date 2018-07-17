#include<bits/stdc++.h>
using namespace std;

int prime(long long n)
{
    long long i;

    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else if(n%2==0)
        return 0;
    else
    {
        for(i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
                return 0;
        }
        return 1;
    }
}

long long rev(long long n)
{
    long long sum=0;

    while(n!=0)
    {
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}

int main()
{
    long long t,i,a,b;

    while(scanf("%lld",&t)!=EOF)
    {
        while(t--)
        {
            long long count=0,x;

            scanf("%lld %lld",&a,&b);

            if(a<=2&&b>=2)
                count++;

            if(a%2==0)
            {
                for(i=a+1;i<=b;i+=2)
                {
                    if(prime(i)==1)
                    {
                        x=rev(i);

                        if(prime(x)==1)
                            count++;
                    }
                }
            }
            else
            {
                for(i=a;i<=b;i+=2)
                {
                    if(prime(i)==1)
                    {
                        x=rev(i);

                        if(prime(x)==1)
                            count++;
                    }
                }
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}

