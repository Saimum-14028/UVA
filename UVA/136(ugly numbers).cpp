#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("10970i.txt","r",stdin);
    //freopen("10970o.txt","w",stdout);

    long long  i,x,y,count=0;

    for(i=859963300;i<859963400;i++)
    {
        x=i;
        y=2;

        while(x!=1)
        {
            if(x%y==0)
                x=x/y;
            else
                y++;

            if(y>5)
                break;
        }
        if(x==1)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}
