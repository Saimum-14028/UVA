#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[1001],str1[1001];
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
                cout<<"Uh oh.."<<endl;
            else
            {
                for(i=0,j=b-1;i<b/2;i++,j--)
                {
                    if(str1[i]!=str1[j])
                    {
                        c=1;
                        break;
                    }
                }
                if(c==1)
                    cout<<"Uh oh.."<<endl;
                else
                    cout<<"You won't be eaten!"<,endl;
            }
        }
    }
    return 0;
}
