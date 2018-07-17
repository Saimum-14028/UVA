#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    double l,w,r,area,pi,a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l;
        w=6*l/10;
        r=2*l/10;
        pi=acos(-1);
        area=w*l;
        a=pi*r*r;
        b=area-a;
        printf("%.2lf %.2lf\n",a,b);
    }
    return 0;
}

