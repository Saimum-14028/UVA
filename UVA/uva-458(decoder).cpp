#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[1001];
    int i,a;
    while(scanf("%s",str)!=EOF)
    {
        a=strlen(str);
        for(i=0;i<a;i++)
        {
            str[i]=str[i]-7;
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
