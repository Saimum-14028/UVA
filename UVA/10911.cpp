#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int i,x[2*n],y[2*n],k=-1,arr[2*n]={-1},j,a,b;
        double sum=0;

        for(i=0;i<2*n;i++)
        {
            char str[21];
            getchar();
            cin>>str;
            cin>>x[i]>>y[i];
        }
        for(i=0;i<2*n;i++)
        {
            double max=100000,sq;
            k++;
            for(j=i;j<2*n;j++)
            {

                if(j!=arr[0]&&j!=arr[1]&&j!=arr[2]&&j!=arr[3]&&j!=arr[4]&&j!=arr[5]&&j!=arr[6]&&j!=arr[7]&&j!=arr[8]&&j!=arr[9]&&j!=arr[10]&&j!=arr[11]&&j!=arr[12]&&j!=arr[13]&&j!=arr[14]&&j!=arr[15]&&j!=arr[16]&&j!=arr[17]&&j!=arr[18]&&j!=arr[19])
                {
                    a=(x[i]-x[j])*(x[i]-x[j]);
                    b=(y[i]-y[j])*(y[i]-y[j]);

                    sq=sqrt(a+b);
                    printf("%lf\n",sq);
                    if(sq<=max)
                    {
                        max=sq;
                        arr[k]=j;
                    }
                }
            }
            sum=sum+max;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}
