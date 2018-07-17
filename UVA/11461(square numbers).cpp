#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("11461i.txt","r",stdin);
//freopen("11461o.txt","w",stdout);

    int a,b,ans;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            return 0;
        ans=(int)sqrt(b)-(int)sqrt(a-1);

        cout<<ans<<endl;
    }
    return 0;
}

