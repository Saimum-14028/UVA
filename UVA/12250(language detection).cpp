#include<bits/stdc++.h>
using namespace std;

int main()
{
   // freopen("11498i.txt","r",stdin);
   // freopen("11498o.txt","w",stdout);

   int i=0;
   string s;

    while(cin>>s)
    {
        i++;

        if(s=="#")
            return 0;
        else if(s=="HELLO")
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(s=="HOLA")
            cout<<"Case "<<i<<": SPANISH"<<endl;
        else if(s=="HALLO")
            cout<<"Case "<<i<<": GERMAN"<<endl;
        else if(s=="BONJOUR")
            cout<<"Case "<<i<<": FRENCH"<<endl;
        else if(s=="CIAO")
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(s=="ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
    }
   return 0;
}
