#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("12100i.txt","r",stdin);
  //  freopen("12100o.txt","w",stdout);

    int t,n,m,i,x;

    while(cin>>t)
    {
        while(t--)
        {
            priority_queue<int>pq;
            deque<pair<int,int> >dq;
            int ans=0;

            cin>>n>>m;

            for(i=0;i<n;i++)
            {
                cin>>x;

                pq.push(x);

                if(i==m)
                    dq.push_back(make_pair(x,1));
                else
                    dq.push_back(make_pair(x,0));
            }

            while(pq.empty()!=true)
            {
                if(pq.top()==dq.front().first)
                {
                    ans++;

                    if(dq.front().second==1)
                        break;

                    pq.pop();
                    dq.pop_front();
                }
                else
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
