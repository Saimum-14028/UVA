#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,u,f,d,k;
    while(cin>>h>>u>>d>>f)
    {
        double i,sum=0,a;
        if(h==0)
            return 0;
        else
        {
            a=(u*f)/100.0;
            //cout<<a<<endl;
            for(i=u,k=0;;i=i-a)
            {
                k++;
                if(i>0)
                    sum+=i;
               // cout<<sum<<endl;
                if(sum>h)
                {
                    printf("success on day %d\n",k);
                    break;
                }
                sum-=d;
                //cout<<sum<<endl;
                if(sum<0)
                {
                    printf("failure on day %d\n",k);
                    break;
                }
            }
        }
    }
    return 0;
}
