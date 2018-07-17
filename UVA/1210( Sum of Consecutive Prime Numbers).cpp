#include<bits/stdc++.h>
using namespace std;

int prime[1000001];

int main()
{
 //   freopen("1210i.txt","r",stdin);
 //   freopen("1210o.txt","w",stdout);

    int i,j,n;
    vector<int>v;

    v.push_back(2);

    for(i=3;i<10000;i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i+i;j<10000;j+=i)
                prime[j]=1;
            v.push_back(i);
        }
    }

 /*   for(i=0;i<v.size();i++)
    {
        cout<<i<<' '<<v[i]<<endl;
    }*/

    while(cin>>n)
    {
        if(n==0)
            return 0;

        int count=0,sum;

        if(prime[n]==0&&(n%2!=0||n==2))
            count++;

        for(i=0;i<v.size()-1;i++)
        {
            sum=v[i];
            j=i+1;

            while(1)
            {
                sum+=v[j];

                if(sum==n)
                {
                    count++;
                    break;
                }

                if(sum>n)
                    break;

                if(sum<n)
                    j++;
            }
        //    cout<<sum<<endl;
            if(v[i]>n)
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
