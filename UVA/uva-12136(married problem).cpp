#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,n,i;
    char c1,c2,c3,c4;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x1>>c1>>y1>>x2>>c2>>y2>>x3>>c3>>y3>>x4>>c4>>y4;
        cout<<"Case "<<i<<": ";
        if(((x1>x3)&&(x1>x4))||((x2<x3)&&(x2<x4)))
            cout<<"Hits Meeting"<<endl;
        else if((x1==x3)&&(x2==x4))
            cout<<"Mrs Meeting"<<endl;
        else if((x1==x3)&&(x1==x4))
        {
            if((y1>y3)&&(y1>y4))
                cout<<"Hits Meeting"<<endl;
            else
                cout<<"Mrs Meeting"<<endl;
        }
        else if((x2==x3)&&(x2==x4))
        {
            if((y2<y3)&&(y2<y4))
                cout<<"Hits Meeting"<<endl;
            else
                cout<<"Mrs Meeting"<<endl;
        }
        else
            cout<<"Hits Meeting"<<endl;
    }
    return 0;
}
