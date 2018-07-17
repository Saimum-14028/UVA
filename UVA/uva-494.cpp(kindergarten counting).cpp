#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[1001];
    int i,a,c,j;
    while(gets(str))
    {
        c=0;
        a=strlen(str);
        for(j=0;j<a;j++)
        {
            if((str[j]>64&&str[j]<91)||(str[j]>96&&str[j]<123))
                break;
        }
        for(i=j;i<a-1;i++)
        {
            if(((str[i]<64||str[i]>122)||(str[i]>90&&str[i]<97))&&((str[i+1]>64&&str[i+1]<91)||(str[i+1]>96&&str[i+1]<123)))
                c++;
        }
        cout<<c+1<<endl;
    }
    return 0;
}
