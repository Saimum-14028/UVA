#include <bits/stdc++.h>
#define size 1000005
typedef long long ll;
using namespace std;

bool prime[size];
ll primelist[1000005];
long long rev(long long n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}

int main()
{
    ///prime
    ll i,j,ct,bb=0,k=0,ck[100000];
    for(i=4 ; i<=1000005 ; i+=2)
        prime[i]=true;
    for(i=3 ; i<=1000005 ; i+=2){
        if(!prime[i]){
            primelist[k++]=i;
            for(j=i*i ; j<=1000005 ; j+=(2*i))
                prime[j]=true;
        }
    }
    ///digit prime
    for(ll i=0 ; i<k ; i++){
        if(!prime[rev(primelist[i])])
           ck[bb++]=primelist[i];
    }

    ll a,b,tc;
    scanf("%lld",&tc);
    while(tc--){
        ct=0;
        scanf("%lld%lld",&a,&b);
        for(i=0 ; i<bb ; i++){
            if(a<=ck[i] && ck[i]<=b)
            ct++;
            else if(b<ck[i]){
                printf("%lld\n",ct);
                break;
            }
        }
    }

    return 0;
}
