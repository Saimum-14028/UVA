#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n,i,c=0;
    long long sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        if(c==0)
        {
            printf("PERFECTION OUTPUT\n");
            c=1;
        }

        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        if(n==1)
            printf("%5d  DEFICIENT\n",n);
        else
        {
            for(i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    sum=sum+i+n/i;
                }
                if((n/i)==sqrt(n))
                    sum=sum-i;
            }
            sum++;
            if(sum==n)
                printf("%5d  PERFECT\n",n);
            else if(sum>n)
                printf("%5d  ABUNDANT\n",n);
            else
                printf("%5d  DEFICIENT\n",n);
        }

    }

    return 0;
}
