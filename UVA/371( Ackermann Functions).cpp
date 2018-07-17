#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("371i.txt","r",stdin);
  //  freopen("371o.txt","w",stdout);

    long long i,l,h,x,index,count,max;

    while(cin>>l>>h)
    {
        max=0;
        index=1;

        if(l==0&&h==0)
            return 0;

        if(l>h)
            swap(l,h);

        for(i=l;i<=h;i++)
        {
            x=i;
            count=0;

            while(1)
            {
                if(x%2)
                    x=3*x+1;
                else
                    x/=2;

                count++;

                if(x==1)
                    break;
            }

            if(count>max)
            {
                max=count;
                index=i;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<index<<" generates the longest sequence of "<<max<<" values."<<endl;
    }
    return 0;
}
