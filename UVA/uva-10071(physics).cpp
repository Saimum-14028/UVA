#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int v,t,s;
    while(scanf("%lld %lld",&v,&t)!=EOF)
    {
        s=2*v*t;
        cout<<s<<endl;
    }
    return 0;
}
