#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11942i.txt","r",stdin);
    //freopen("11942o.txt","w",stdout);

    int t,x,y,i;

    while(cin>>t)
    {
        cout<<"Lumberjacks:"<<endl;

        while(t--)
        {
            int count1=0,count2=0;

            for(i=0;i<10;i++)
            {
                cin>>x;

                if(i==0)
                    y=x;
                else
                {
                    if(y>=x)
                        count1++;
                    if(y<=x)
                        count2++;

                    y=x;
                }
            }
            if(count1==9||count2==9)
                cout<<"Ordered"<<endl;
            else
                cout<<"Unordered"<<endl;
        }
    }
    return 0;
}



