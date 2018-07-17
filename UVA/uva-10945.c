#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],str1[1001],str2[1001];
    int i,j,a,b,c;
    while(gets(str)!=EOF)
    {
        c=0;
        if(!(strcmp(str,"DONE")))
            return 0;
        else
        {
            a=strlen(str);
            for(i=0,j=0;i<a;i++)
            {
                if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123))
                {
                    str1[j]=str[i];
                    j++;
                }
            }
            b=strlen(str1);
            if(!(b%2))
                printf("Uh oh..\n");
            else
            {
                for(i=0,j=b-1;i<b;i++,j--)
                {
                    str2[i]=str1[j];
                }
                if(!(strcmp(str1,str2)))
                    printf("You won't be eaten!\n");
                else
                    printf("Uh oh..\n");
            }
        }
    }
    return 0;
}

