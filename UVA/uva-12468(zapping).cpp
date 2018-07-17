#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(a==-1&&b==-1)
            return 0;
        else
        {
            c=b-a;
            d=a-b+100;
            if(c<0)
            {
                c=-c;
                d=100-a+b;
            }

            if(c>d)
                cout<<d<<endl;
            else
                cout<<c<<endl;
        }
    }
    return 0;
}
