#include<bits/stdc++.h>
using namespace std;

vector<long long>v;

void bee()
{
    int i;

    v.push_back(0);
    v.push_back(1);

    for(i=2;i<46;i++)
        v.push_back(v[i-1]+v[i-2]+1);

    return;
}

int main()
{
    bee();

    int n;

    while(cin>>n)
    {
        if(n==-1)
            return 0;
        else
        {
            cout<<v[n]<<' '<<v[n+1]<<endl;
        }
    }
    return 0;
}
