#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
       return gcd(b,a%b);
}

int main()
{
  //  freopen("11827i.txt","r",stdin);
  //  freopen("11827o.txt","w",stdout);

    int n;

    while(cin>>n)
    {
        while(n--)
        {
            int arr[110],i=0,j,k,max=0,x;
            char ch;

            do
            {
                scanf("%d%c",&arr[i++],&ch);
            }
            while(ch!='\n');

            for(j=0;j<i-1;j++)
            {
                for(k=j+1;k<i;k++)
                {
                    x=gcd(arr[j],arr[k]);

                    if(x>max)
                        max=x;
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
}

