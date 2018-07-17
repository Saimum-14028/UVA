#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("900i.txt","r",stdin);
  //  freopen("900o.txt","w",stdout);

    int n,i;
    vector<long long>v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    for(i=3;i<51;i++)
    {
        v.push_back(v[i-1]+v[i-2]);
    }

    while(cin>>n)
    {
        if(n==0)
            return 0;

        cout<<v[n]<<endl;
    }
    return 0;
}


