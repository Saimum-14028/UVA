#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("10300i.txt","r",stdin);
  //  freopen("10300o.txt","w",stdout);

    long long n,g,a,m,e,f;

    while(scanf("%lld",&n)!=EOF)
    {
        while(n--)
        {
            scanf("%lld",&f);

            long long ans=0;

            while(f--)
            {
                scanf("%lld %lld %lld",&a,&m,&e);

                if(m>0)
                    ans+=(a*e);
            }

            printf("%lld\n",ans);

        }
    }
    return 0;
}

