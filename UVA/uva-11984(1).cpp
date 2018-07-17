#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double d,c1,c2;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c1>>d;
        c2=(5.0/9)*d+c1;
        printf("Case %d: %.2lf\n",i,c2);
    }
    return 0;
}
