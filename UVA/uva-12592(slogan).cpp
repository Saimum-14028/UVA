#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int i,j,n,q;
    char str[40][101];
    char stri[100][101];
    scanf("%d",&n);
    getchar();
    for(i=0;i<2*n;i++)
            gets(str[i]);
    scanf("%d",&q);
    getchar();
    for(j=0;j<q;j++)
    {
        gets(stri[j]);
        for(i=0;i<2*n;i=i+2)
        {
            if(strcmp(str[i],stri[j])==0)
            {
                i++;
                printf("%s\n",str[i]);
                break;
            }
        }
    }
    return 0;
}
