#include<iostream>
#include<cstdio>
#define sf scanf("%d",&x);
using namespace std;
int main()
{
    int m,n,x,sum,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            sf
            sum=sum+x;
        }
        if(sum%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
