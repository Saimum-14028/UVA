#include<bits/stdc++.h>
using namespace std;

int divisors(int i)
{
    int c=0,j=-1,x=2,ans=1,t=i;
    vector<long long>v;

    if(i==1)
        return 1;

    while(i!=1)
    {
        if(x*x>t)
        {
            v.push_back(2);
            break;
        }

        if(i%x==0&&c==0)
        {
            //cout<<i%x<<endl;
            v.push_back(1);
            j++;
            c=1;
        }
        else if(i%x==0&&c==1)
        {
            i=i/x;
            v[j]++;
        }
        else
        {
            x++;
            c=0;
        }
    }

    for(j=0;j<v.size();j++)
    {
      //  cout<<v[j]<<endl;

        ans=ans*v[j];
    }

    return ans;
}

int main()
{
   // freopen("294i.txt","r",stdin);
 //   freopen("294o.txt","w",stdout);

    int n,a,b,i,x;

    scanf("%d",&n);

    while(n--)
    {
        scanf("%d %d",&a,&b);

        int max=0,index=0;

        for(i=a;i<=b;i++)
        {
            x=divisors(i);

            if(x>max)
            {
                max=x;
                index=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,index,max);
    }
    return 0;
}
