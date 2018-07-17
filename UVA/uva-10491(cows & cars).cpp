#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cw,cr,sw;
    double bscw,bscr,bcwascr,bcrascr,ans;

    while(cin>>cw>>cr>>sw)
    {
        bscw=1.0*cw/(cw+cr);    ///before show cow(probability of cow)
        bscr=1.0*cr/(cw+cr);      ///before show cow(probability of car)

        bcrascr=1.0*(cr-1)/(cw+cr-sw-1);  ///after show cow(probability of car)(if before car)
        bcwascr=1.0*cr/(cw+cr-sw-1);                 ///before show cow(probability of car)(if before cow)

        ans=bscw*bcwascr+bscr*bcrascr;

        printf("%.5lf\n",ans);
    }
    return 0;
}
