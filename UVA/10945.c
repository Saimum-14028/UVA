#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],str1[1001];
    int i,j,a,b,c;
    while(gets(str)!=EOF)
    {
        if(!(strcmp(str,"DONE")))
            return 0;
        else
        {
            c=0;
            a=strlen(str);
            for(i=0,j=0;i<a;i++)
            {
                if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123))
                {
                    if(str[i]>64&&str[i]<91)
                        str[i]=str[i]+32;
                    str1[j]=str[i];
                    j++;
                }
            }
            str1[j]='\0';
            b=strlen(str1);
            for(i=0,j=b-1;i<b/2;i++,j--)
            {
                if(str1[i]!=str1[j])
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                printf("Uh oh..\n");
            else
                printf("You won't be eaten!\n");
        }
    }
    return 0;
}
