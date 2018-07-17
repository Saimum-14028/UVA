#include <bits/stdc++.h>

#define scl1(a) scanf("%lld",&a)  ///single long long int input
#define scf(a) scanf("%f",&a)      ///single float input
#define scd3(a) scanf("%lf%lf%lf",&a,&b,&c)      ///single double input
#define scl2(a,b) scanf("%lld%lld",&a,&b)
#define scl3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c)
#define sci1(a) scanf("%d",&a)       ///single int input
#define sci2(a,b) scanf("%d%d",&a,&b)
#define sci3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define csprint(a) printf("Case %d: ",a++)
#define prl1(a) printf("%lld",a)
#define prl2(a,b) printf("%lld %lld",a,b)
#define pri1(a) printf("%d\n",a)
#define pri2(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("int.txt","r",stdin)
#define outfile freopen("outt.txt","w",stdout)
#define mx 1000009
#define pi acos(-1.0)
#define inf 1<<31
#define fs first
#define sc second
#define pb(a) push_back(a)
#define ppb pop_back()

///#define area of a polygon inside a circle (1/2)*n*r*r*(sin(2*pi)/n)
using namespace std;
typedef long long int lng;

int main()
{
    //infile;
    //outfile;
    int tc;
    double r,r1,ans,a,b,c;
 //   int ans1,tc,d,e,f;
    sci1(tc);
    while(tc--){
      //  sci3(d,e,f);
    //    a=d,b=e,c=f;
        cin>>a>>b>>c;
        r1=a-b;
        if(r1>=0){
            ans=((c/(a+b))*a)+(r1*((c/(a+b))));
        //    ans1=ans;
        }
        else if(r1<0){
            r1=-r1;
            ans=((c/(a+b))*a)-(r1*((c/(a+b))));
        //    ans1=ans;
        }

        printf("%.0lf\n",ans);
    }

    return 0;
}
