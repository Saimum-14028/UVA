#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int a,f,i,j,k,l;
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&a,&f);

            for(j=1;j<=f;j++)
            {
                for(k=1;k<=a;k++)
                {
                    for(l=1;l<=k;l++)
                    {
                        printf("%d",k);
                    }
                    printf("\n");
                }

                for(k=a-1;k>0;k--)
                {
                    for(l=k;l>0;l--)
                    {
                        printf("%d",k);
                    }
                    printf("\n");
                }

                if(j!=f)
                    printf("\n");
            }

            if(i!=t-1)
                printf("\n");
        }
    }
    return 0;
}
