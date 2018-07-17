#include<bits/stdc++.h>
using namespace std;

void ternary(long long n)
{
    vector<int>v;
    int i;

    if(n==0)
        cout<<0;

    while(n!=0)
    {
        v.push_back(n%3);
        n=n/3;
    }

    for(i=v.size()-1;i>=0;i--)
        cout<<v[i];

    cout<<endl;
}

int main()
{
 //   freopen("11185i.txt","r",stdin);
  //  freopen("11185o.txt","w",stdout);

    long long n;

    while(cin>>n)
    {
        if(n<0)
            return 0;

        ternary(n);
    }
    return 0;
}

