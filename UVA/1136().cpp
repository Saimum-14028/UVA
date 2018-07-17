#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t,i,a,b,j,d,c;
    while(scanf("%ld",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%ld %ld",&a,&b);
                c=2*(a-1)/3;
                d=2*b/3;
            printf("Case %ld: %ld\n",i,d-c);
        }
    }
    return 0;
}
