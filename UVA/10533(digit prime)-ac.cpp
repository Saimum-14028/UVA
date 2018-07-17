#include<bits/stdc++.h>
#define MAX 1000001
using namespace std;

int digit_prime[MAX];
bool prime[MAX];

void sieve()
{
    int i, j, x;

    prime[0] = prime[1] = 1;

    for(i=3;i*i<=MAX;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<=MAX;j+= i)
            {
                prime[j]=1;
            }
        }
    }
    return;
}

int rev(int n)
{
    int sum=0,x;

    while(n!=0)
    {
        x=n%10;
        n/=10;
        sum+=x;
    }
    return sum;
}

int main()
{
    sieve();

    int a, b, t, i, count=0,x;

    for(i=3; i<=1000000; i+=2)
    {
        if(prime[i]==0)
        {
            x=rev(i);

            if(prime[x]==0&&x==2)
                count++;
            else if(prime[x]==0&&x%2)
                count++;
        }
        digit_prime[i]=count;

     //  cout<<i<<' '<<digit_prime[i]<<endl;
    }

    while(scanf("%d", &t)!=EOF)
    {
        while(t--)
        {
            scanf("%d %d", &a, &b);

            if(a<=2&&b>=2)
            {
                if(a%2==0&&b%2==0)
                    x=digit_prime[b-1]-digit_prime[a-1]+1;
                else if(a%2==0)
                    x=digit_prime[b]-digit_prime[a-1]+1;
                else if(b%2==0)
                {
                    if(a==1)
                        a++;
                    x=digit_prime[b-1]-digit_prime[a-2]+1;
                }
                else
                {
                    if(a==1)
                        a++;
                    x=digit_prime[b]-digit_prime[a-2]+1;
                }
                printf("%d\n",x);
            }
            else
            {
                if(a%2==0&&b%2==0)
                    x=digit_prime[b-1]-digit_prime[a-1];
                else if(a%2==0)
                    x=digit_prime[b]-digit_prime[a-1];
                else if(b%2==0)
                {
                    if(a==1)
                        a++;
                    x=digit_prime[b-1]-digit_prime[a-2];
                }
                else
                {
                    if(a==1)
                        a++;
                    x=digit_prime[b]-digit_prime[a-2];
                }

                printf("%d\n",x);
            }
        }
    }
   return 0;
}
