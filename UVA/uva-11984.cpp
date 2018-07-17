#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double c1,c2,f1,f2,d;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>c1>>d;
        f1=(9.0/5)*c1+32;
        f2=f1+d;
        c2=(5*f2-160)/9;
        printf("Case %d: %.2lf\n",i,c2);
    }
    return 0;
}
