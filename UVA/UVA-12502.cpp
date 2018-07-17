#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("12502i.txt","r",stdin);
 //   freopen("12502o.txt","w",stdout);

    int t;
    double x,y,ans,z;

    while(cin>>t)
    {
        while(t--)
        {
            cin>>x>>y>>z;

       //     x=x*z;
      //      y=y*z;

            ans=(x+y)/3;

            x=x-ans;
            y=y-ans;

            ans=x+y;

            x=(x*z/ans);

            printf("%.0lf\n",x);
        }
    }
    return 0;
}
