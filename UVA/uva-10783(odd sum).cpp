#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,t,a,b,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        if(a%2==0)
            a=a+1;
        if(b%2==0)
            b--;
        for(j=a;j<=b;j=j+2)
            sum=sum+j;
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
