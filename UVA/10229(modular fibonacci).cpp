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
//    freopen("10229i.txt","r",stdin);
 //   freopen("10229o.txt","w",stdout);

    long long n,m,i;

    while(cin>>n>>m)
    {
        vector<long long>v;

        v.push_back(0);
        v.push_back(1%power(2,m));

        for(i=2;i<=n;i++)
            v.push_back((v[i-1]+v[i-2])%power(2,m));

        cout<<v[n]<<endl;;
    }
    return 0;
}
