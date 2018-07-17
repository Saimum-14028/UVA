#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int a,b,diff;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        diff=fabs(b-a);
        cout<<diff<<endl;
    }
    return 0;
}
