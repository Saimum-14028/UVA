#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    long long int i,j,k;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
            return 0;
        else
        {
            i=a*a;
            j=b*b;
            k=c*c;
            if((i+j==k)||(j+k==i)||(k+i==j))
                cout<<"right"<<endl;
            else
                cout<<"wrong"<<endl;
        }
    }
    return 0;
}
