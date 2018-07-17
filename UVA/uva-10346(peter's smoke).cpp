#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,k,sum,a;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        sum=n;
        while(n!=0)
        {
            a=n%k;
            n=n/k;
            sum=sum+n;
            if(n!=0)
                n=n+a;
        }
        cout<<sum<<endl;

    }
    return 0;
}
