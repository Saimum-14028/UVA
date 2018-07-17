#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int count[101]={0};
    int n,i,age;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            return 0;
        else
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&age);
                count[age]++;
            }
            for(i=1;i<=100;i++)
            {
                while(count[i]!=0)
                {
                    n--;
                    if(n==0)
                        printf("%d",i);
                    else
                        printf("%d ",i);
                    count[i]--;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
