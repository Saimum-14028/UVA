#include<bits/stdc++.h>
int T,p,j,q,i;
char s1[105];
char s2[105];
char s[40][105];
int main()
{
    scanf("%d",&T);
    p=T*2;
    getchar();
    for(i=0;i<p;i++)
    {
        gets(s1);
        strcpy(s[i],s1);
    }
    scanf("%d",&q);
    if(q<T){
    getchar();
    while(q--)
    {

        gets(s2);
        for(i=0;i<p;i++){
        if(strcmp(s2,s[i])==0)
            printf("%s\n",s[i+1]);
        }
    }
    }
    return 0;
}
