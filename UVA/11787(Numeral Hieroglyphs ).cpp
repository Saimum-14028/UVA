#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11787i.txt","r",stdin);
   // freopen("11787o.txt","w",stdout);

    int t;

    while(scanf("%d",&t)!=EOF)
    {
        while(t--)
        {
            int count[7]={0},k=0,l=0,j,c1=0,c2=0,sum,x,y,z,i;
            char str1[8]="BUSPFTM";
            char str2[8]="MTFPSUB";
            char str[352];

            scanf("%s",str);

            x=strlen(str);
            y=strlen(str1);
            z=strlen(str2);

            for(i=0;i<x;i++)
            {
                if(str[i]=='B')
                    count[0]++;
                else if(str[i]=='U')
                    count[1]++;
                else if(str[i]=='S')
                    count[2]++;
                else if(str[i]=='P')
                    count[3]++;
                else if(str[i]=='F')
                    count[4]++;
                else if(str[i]=='T')
                    count[5]++;
                else if(str[i]=='M')
                    count[6]++;

                for(j=k;j<y;j++)
                {
                    if(str[i]==str1[j])
                        break;
                }
                if(j==y)
                    c1=1;
                else
                   k=j;

              //  cout<<c1<<' '<<k<<endl;

                for(j=l;j<z;j++)
                {
                    if(str[i]==str2[j])
                        break;
                }
                if(j==z)
                    c2=1;
                else
                   l=j;

             //   cout<<c2<<' '<<l<<endl;
            }

        //    cout<<c1<<' '<<c2<<endl;

            if(c1&&c2)
                printf("error\n");
            else
            {
                if(count[0]>9||count[1]>9||count[2]>9||count[3]>9||count[4]>9||count[5]>9||count[6]>9)
                   printf("error\n");
                else
                {
                    sum=count[0]*1+count[1]*10+count[2]*100+count[3]*1000+count[4]*10000+count[5]*100000+count[6]*1000000;

                    printf("%d\n",sum);
                }
            }
        }
    }
    return 0;
}
