#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("160i.txt","r",stdin);
    freopen("160o.txt","w",stdout);

    int n,i,x,y;

    while(cin>>n)
    {
        map<int,int>m;

        if(n==0)
            return 0;

        for(i=2;i<=n;i++)
        {
            x=i,y=2;

            while(x!=1)
            {
                if(x%y==0)
                {
                    m[y]++;
                    x=x/y;
                }
                else
                    y++;
            }
        }
        map<int,int>::iterator it;

        printf("%3d! =",n);

        int count=0;

        for(it=m.begin();it!=m.end();it++)
        {
            count++;

            x=(int)it->second;

            if(count%15==1&&count/15>0)
                printf("\n%9d",x);
            else
                printf("%3d",x);
        }
        cout<<endl;
    }
    return 0;
}
