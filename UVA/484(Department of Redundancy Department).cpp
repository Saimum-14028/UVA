#include<bits/stdc++.h>
using namespace std;

int arr[200009];
vector<int>v;

int main()
{
    int n,i,x,siz;

    while(scanf("%d",&n)!=EOF)
    {
        x=n+100000;

        if(arr[x]==0)
        {
            v.push_back(x);
        }
        arr[x]++;
    }

    siz=v.size();

    for(i=0;i<siz;i++)
    {
        printf("%d %d\n",v[i]-100000,arr[v[i]]);
    }
    return 0;
}
