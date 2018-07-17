#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n,sum,a;
    while(scanf("%lld",&n)!=EOF)
    {
        sum=0;
        if(n==0)
            return 0;
        else if(n<10)
            cout<<n<<endl;
        else
        {
            while(1)
            {
                a=n%10;
                sum=sum+a;
                n=n/10;
                if(n==0)
                {
                    if(sum<10)
                    {
                        cout<<sum<<endl;
                        break;
                    }
                    else
                        n=sum;
                        sum=0;
                }
            }
        }
    }
    return 0;
}
