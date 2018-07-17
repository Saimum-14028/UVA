#include<bits/stdc++.h>

using namespace std;

int func(int n){
            if(n==0)
                return 0;
            else if(n%10>0)
                return (n%10);
            else return func(n/10);
}

int main()
{
 //   freopen("10994i.txt","r",stdin);
 //   freopen("10994o.txt","w",stdout)
    int p,q;
    while(cin >> p >> q){
        if(p==-1&&q==-1)
        return 0;
    long long ans=0;
    for(int i=p; i<=q; i++){
        ans+=func(i);
    }
    cout << ans << endl;
    }
    return 0;
}
