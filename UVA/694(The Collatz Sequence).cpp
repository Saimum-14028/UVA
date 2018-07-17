#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("371i.txt","r",stdin);
  //  freopen("371o.txt","w",stdout);

    long long i=0,l,h,x,index,count,max;

    while(cin>>l>>h)
    {

        if(l<0&&h<0)
            return 0;

            x=l;
            count=1;

        while(x!=1)
        {
            if(x%2)
                x=3*x+1;
            else
                x/=2;

            if(x>h)
                break;

            count++;
        }
        cout<<"Case "<<++i<<": A = "<<l<<", limit = "<<h<<", number of terms = "<<count<<endl;
    }
    return 0;
}

