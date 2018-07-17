#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,x,c;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=0;
        for(j=0;j<13;j++)
        {
            cin>>x;
            if(x==0)
                c++;
        }
        if(c==0)
            cout<<"Set #"<<i<<": Yes"<<endl;
        else
            cout<<"Set #"<<i<<": No"<<endl;
    }
    return 0;
}
