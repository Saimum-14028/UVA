#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
            return 0;
        else if(n<101)
            cout<<"f91("<<n<<") = 91"<<endl;
        else
            cout<<"f91("<<n<<") = "<<n-10<<endl;
    }
    return 0;
}
