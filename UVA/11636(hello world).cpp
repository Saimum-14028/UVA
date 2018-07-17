#include<bits/stdc++.h>
using namespace std;

int power(int x)
{
    int ans=1;

    while(x!=0)
    {
        ans=ans*2;
        x--;
    }
    return ans;
}

int main()
{
    //freopen("11461i.txt","r",stdin);
//freopen("11461o.txt","w",stdout);

    int arr[16]={0},i,j=0,n;

    for(i=1;i<16;i++)
    {
        arr[i]=power(i-1);
    }

    while(cin>>n)
    {
        if(n<0)
            return 0;

       for(i=0;i<15;i++)
       {
           if(arr[i]<n&&arr[i+1]>=n)
           {
               cout<<"Case "<<++j<<": "<<i<<endl;
               break;
           }
       }

    }
    return 0;
}

