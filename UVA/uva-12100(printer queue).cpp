#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int t,n,m,count,i,j,max,p,k;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=0;i<t;i++)
        {
            max=0;
            count=0;
            scanf("%d %d",&n,&m);
            int arr[n];
            for(j=0;j<n;j++)
            {
                scanf("%d",&arr[j]);
                if(max<=arr[j])
                {
                    max=arr[j];
                    p=j;
                }
            }
            if(max==arr[m])
            {
                for(j=0;j<m;j++)
                {
                    if(max==arr[j])
                        count++;
                }
                printf("%d\n",++count);
            }
            else if(m<p)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[m]<arr[j])
                        count++;
                }
                for(k=0;;k++)
                {
                    if(arr[k]==max)
                        break;
                }
                for(j=0;j<k;j++)
                {
                    if(arr[m]==arr[j])
                        count++;
                }
                for(j=p+1;j<n;j++)
                {
                    if(arr[j]==arr[m])
                        count++;
                }
                printf("%d\n",++count);
            }
            else
            {
                for(j=0;j<n;j++)
                {
                    if(arr[m]<arr[j])
                        count++;
                }
                for(j=p+1;j<m;j++)
                {
                    if(arr[j]==arr[m])
                        count++;
                }
                printf("%d\n",++count);
            }
        }
    }
    return 0;
}
