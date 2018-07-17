#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("12015i.txt","r",stdin);
 //   freopen("12015o.txt","w",stdout);

    int t;

    while(cin>>t)
    {
        int j=0;

        while(t--)
        {
            vector<pair<string,int> >v;
            int i,x,max=0;
            string s;

            cout<<"Case #"<<++j<<':'<<endl;

            for(i=0;i<10;i++)
            {
                cin>>s>>x;
                v.push_back(make_pair(s,x));

                if(x>max)
                    max=x;
            }
            for(i=0;i<10;i++)
            {
                if(v[i].second==max)
                {
                    cout<<v[i].first<<endl;
                }
            }
        }
    }
    return 0;
}
