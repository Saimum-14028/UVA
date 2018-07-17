#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,x,y;

    while(cin>>n)
    {
        vector<int>v;
        int count[n]={0},c=0;

        for(i=0;i<n;i++)
        {
            cin>>x;

            if(i>0)
            {
                v.push_back(labs(x-y));
                count[labs(x-y)]++;
            }

            y=x;
        }

        for(i=0;i<v.size();i++)
        {
            if(v[i]>=n)
            {
                c=1;
                break;
            }
        }

        for(i=1;i<n;i++)
        {
            if(count[i]==0)
            {
                c=1;
                break;
            }
        }

        if(c==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }

    return 0;
}


