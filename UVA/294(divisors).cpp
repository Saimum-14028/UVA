#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    v.push_back(0);
    v.push_back(1);

    int i,j,a,b,n;

    for(i=2;i<=1000000000;i++)
    {
        int count=0;

        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                if(j*j==i)
                    count++;
                else
                    count+=2;
            }
        }
        count+=2;
        v.push_back(count);
    }

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&a,&b);

        int max=0,index=0;

        for(i=a;i<=b;i++)
        {
            if(v[i]>max)
            {
                max=v[i];
                index=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,index,max);
    }
    return 0;
}
