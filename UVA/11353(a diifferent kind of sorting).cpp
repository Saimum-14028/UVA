#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("11353i.txt","r",stdin);
  //  freopen("11353o.txt","w",stdout);

    int n,i,count,t;
    vector<pair<int,int> >v;

    v.push_back(make_pair(0,0));
    v.push_back(make_pair(1,1));

    for(n=2;n<=2000000;n++)
    {
        t=n;
        i=2,count=0;
        while(1)
        {
            if(t%i==0)
            {
                count++;
                t=t/i;
            }
            else
            {
                if(i==2)
                    i++;
                else
                    i+=2;
            }

            if(t==1)
                    break;
            if(i>sqrt(n))
            {
                count++;
                break;
            }
        }
        v.push_back(make_pair(count,n));
    }

    sort(v.begin(),v.end());

    i=1;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        else
            cout<<"Case "<<i<<": "<<v[n].second<<endl;

        i++;
    }
    return 0;
}
