#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("10070i.txt","r",stdin);
    freopen("10070o.txt","w",stdout);

    long long y,count=0,c,k;

    while(cin>>y)
    {
        c=0,k=0;

        if(count>0)
            cout<<endl;

        if(y%400==0||(y%100!=0&&y%4==0))
        {
            cout<<"This is leap year."<<endl;
            c=1;

            if(y%55==0)
            {
                c=1;
                k=1;
            }
        }

        if(y%15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            c=1;
        }

        if(k==1)
            cout<<"This is bulukulu festival year."<<endl;

        if(c==0)
            cout<<"This is an ordinary year."<<endl;

        count++;
    }
    return 0;
}

