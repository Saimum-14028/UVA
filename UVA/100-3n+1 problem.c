#include<stdio.h>
int main()
{
    unsigned long long int x,y,i,count,j,max,temp;
    int arr[99999];
    while(scanf("%llu %llu",&x,&y)!=EOF)
    {
        max=0;
        printf("%llu %llu ",x,y);
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        for(j=x;j<=y;j++)
        {
            count=0;
            for(i=j;i!=1;)
            {
                if(i%2==1)
                {
                    i=3*i+1;
                    count++;
                }
                else
                {
                    i=i/2;
                    count++;
                }
            }
            arr[j]=count;
            if(max<arr[j])
                max=arr[j];
        }
        printf("%llu\n",max+1);
    }
    return 0;
}
