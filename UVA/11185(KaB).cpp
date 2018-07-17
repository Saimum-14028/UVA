#include<stdio.h>
int main()
{
    long long int d;
    while(1)
    {
        int index=0,j;
        long long int arr[100000];
        scanf("%lld",&d);
        if(d<0)
            break;
        while(d)
        {
            arr[index]=d%3;
            d=d/3;
            index++;
        }
        j=index-1;
        while(j>=0)
            printf("%lld",arr[j--]);
        printf("\n");

    }
    return 0;
}
