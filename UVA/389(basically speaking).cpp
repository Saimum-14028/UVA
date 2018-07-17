#include<bits/stdc++.h>
using namespace std;

long long power(int b,long long p)
{
    long long i=p,ans=1;

    while(i--)
        ans*=b;

    return ans;
}
/*
void baseconvert(long long num,int base)
{
    if(num==0)
        return;

    baseconvert(num/base,base);

    if(num%base>9)
    {
        char ch=(num%base)+55;
        cout<<ch;
    }
    else
        cout<<num%base;
}*/

int main()
{
   //  freopen("389i.txt","r",stdin);
   //  freopen("389o.txt","w",stdout);

    int b,c;
    string str;

    while(cin>>str>>b>>c)
    {
        int x=0,i;

    /*    for(i=0;i<str.size();i++)
        {
            if(str[i]>='0'&&str[i]<='9')
            {
                if((str[i]-'0')>x)
                    x=str[i]-'0';
            }
            else
            {
                if((str[i]-55)>x)
                    x=str[i]-55;
            }
        }

        if(x>=b)
            printf("%s is an illegal base %d number\n",str.c_str(),b);
        else
        {
          */  long long p=0,numb=0;

            for(i=str.size()-1;i>=0;i--)
            {
                if(str[i]>='0'&&str[i]<='9')
                    numb+=(str[i]-'0')*power(b,p);
                else
                    numb+=(str[i]-55)*power(b,p);

                p++;
            }
         //  cout<<numb<<endl;
       //     if(numb==0)
            //    cout<<str<<" base "<<b<<" = "<<0<<" base "<<c<<endl;
        //    else
       //     {
       char ans[100];
       i=0;
            while(numb>0)
            {
                if(numb%c>9)
                    ans[i++]=numb%c+55;
                else
                    ans[i++]=numb%c+'0';
                numb=numb/c;
             //  cout<<ans[i];
            }
            ans[i]='\0';
        //    cout<<ans<<endl;
            if(strlen(ans)>7)
                cout<<setw(7)<<"ERROR"<<endl;
            else if(strlen(ans)==0)
                cout<<setw(7)<<0<<endl;
            else
            {
                int j;
                char rev[8];

                for(i=0,j=strlen(ans)-1;i<strlen(ans);i++,j--)
                    rev[i]=ans[j];

                rev[i]='\0';

                cout<<setw(7)<<rev<<endl;
            }
         //   }
        }
    return 0;
}

