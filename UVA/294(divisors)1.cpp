#include<bits/stdc++.h>
using namespace std;

int divisors(int i)
{
    int count=0,j;

    for(j=1;j*j<=i;j++)
    {
        if(i%j==0)
        {
            if(j*j==i)
                count++;
            else
                count+=2;
        }
    }
    return count;
}

int main()
{
   // freopen("294i.txt","r",stdin);
   // freopen("294o.txt","w",stdout);

    int n,a,b,i,x;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&a,&b);

        int max=0,index=0;

        for(i=a;i<=b;i++)
        {
            x=divisors(i);

            if(x>max)
            {
                max=x;
                index=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,index,max);
    }
    return 0;
}

