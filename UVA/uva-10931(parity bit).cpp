#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,c,n,arr[100];
    while(scanf("%d",&n)!=EOF)
    {
        i=0,c=0;
        if(n==0)
            return 0;
        else
        {
            while(n!=0)
            {
                arr[i]=n%2;
                if(arr[i]==1)
                    c++;
                n=n/2;
                i++;
            }
            printf("The parity of ");
            for(--i;i>=0;i--)
                cout<<arr[i];
            printf(" is %d (mod 2).\n",c);
        }
    }
    return 0;
}
