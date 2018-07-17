#include<bits/stdc++.h>
using namespace std;

long long power(long long base,long long pow)
{
    long long i=pow,ans=1;

    while(i--)
        ans*=base;

    return ans;
}


int main()
{
    freopen("10127i.txt","r",stdin);
    freopen("10127o.txt","w",stdout);

    long long n;

    while(cin>>n)
    {
        long long sum=1,count=0;

        while(sum%n!=0)
        {
            count++;

            sum+=power(10,count);
        }
        cout<<++count<<endl;
    }
    return 0;
}


