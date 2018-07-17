#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("11489i.txt","r",stdin);
  //  freopen("11489o.txt","w",stdout);

    int i,t;

    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            int sum=0,j,x,y,count[3]={0},dum=0;
            string str;

            cin>>str;

            x=str.size();

            for(j=0;j<x;j++)
            {
                y=str[j]-'0';

                count[y%3]++;

                sum+=y;
            }

         //   cout<<sum<<endl<<count[0]<<endl;
             if(sum%3==0)
            {
                if(count[0]%2)
                    printf("Case %d: S\n",i);
                else
                    printf("Case %d: T\n",i);
            }
            else
            {
                if((count[1]&&(sum-1)%3==0)||(count[2]&&(sum-2)%3==0))
                    dum=1;

                if(count[0]%2==0&&dum==1)
                    printf("Case %d: S\n",i);
                else
                    printf("Case %d: T\n",i);
            }
        }
    }
    return 0;
}
