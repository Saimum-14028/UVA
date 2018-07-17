#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("424i.txt","r",stdin);
    freopen("424o.txt","w",stdout);

    char str[105];
    int i=0;
    char ans[105];

    while(scanf("%s",str)!=EOF)
    {
        if(strcmp(str,"0")==0)
        {
            int siz=strlen(ans);

            for(int j=siz-1;j>=0;j--)
                printf("%c",ans[j]);

            printf("\n");

            break;
        }

        if(!i)
        {
            int x=strlen(str),k,j;

            for(j=x-1, k=0;j>=0;j--,k++)
            {
                ans[k]=str[j];
            }

            ans[k]='\0';

           // printf("%s\n",ans);
        }
        else
        {
            int x=strlen(str);
            int y=strlen(ans),j,k;
            int carry=0;
            int temp=0;

            //cout<<ans<<endl;

            for(j=x-1,k=0;j>=0;j--,k++)
            {
                if(k==y)
                {
                    temp=(str[j]-'0'+carry);

                    carry=temp/10;
                    temp%=10;

                    ans[k]=temp+'0';
                   // cout<<ans[k]<<endl;
                }
                else if(k>y)
                {
                    temp=(str[j]-'0')+carry;

                    carry=temp/10;
                    temp%=10;

                    ans[k]=temp+'0';
                  //  cout<<ans[k]<<endl;
                }
                else
                {
                    temp=(ans[k]-'0')+(str[j]-'0')+carry;

                    carry=temp/10;
                    temp%=10;

                    ans[k]=temp+'0';

                   // cout<<ans[k]<<endl;
                }
            }

            while(k<y)
            {
                temp=(ans[k]-'0')+carry;

                carry=temp/10;
                temp%=10;

                ans[k++]=temp+'0';
            }

            if(carry>0)
                ans[k++]=carry+'0';

            if(k>=y)
                ans[k]='\0';
        }

        i++;
    }
    return 0;
}
