#include <bits/stdc++.h>
#define SIZE 1000001
using namespace std;

bool prime[SIZE];
vector<int>primelist;

void sieve()
{
    int i,j;

    prime[0]=1;
    prime[1]=1;

    primelist.push_back(2);

    for(i=3;i*i<SIZE;i+=2)
    {
        if(prime[i]==0)
        {
            primelist.push_back(i);

            for(j=i+i;j<SIZE;j+=i)
                prime[j]=1;
        }
    }

    for(j=i;j<=SIZE;j+=2)
    {
        if(prime[j]==0)
            primelist.push_back(j);
    }

 //   cout<<primelist.size()<<endl;

    return;
}

int rev(int n)
{
    int sum=0;

    while(n!=0)
    {
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}

/*void digit_prime()
{
    sieve();

    int i,x;

    for(i=0;i<primelist.size();i++)
    {
        x=rev(primelist[i].first);

        if(x==2)
            primelist[i].second=1;
        else if(x%2&&prime[x]==0)
            primelist[i].second=1;
    }

   for(i=0;i<30;i++)
        cout<<primelist[i].first<<' '<<primelist[i].second<<endl;

    return;
}
*/

int main()
{
    sieve();
//    digit_prime();

    int t,a,b;

    scanf("%d",&t);
    {
        while(t--)
        {
            int count=0,x,i=0,y,z;

            scanf("%d %d",&a,&b);

            std::vector<int>::iterator low,up;
            low=std::lower_bound (primelist.begin(), primelist.end(), a);
            up= std::upper_bound (primelist.begin(), primelist.end(), b);


            y= (low- primelist.begin());
            z=(up - primelist.begin()) -1;

            while(y<=z)
            {
                x=rev(primelist[y]);

                if(x==2)
                    count++;
                else if(x%2&&prime[x]==0)
                    count++;

                y++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
