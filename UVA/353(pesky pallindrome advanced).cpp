#include<bits/stdc++.h>
using namespace std;

int pallindrome(string str)
{
    int i,j;

    for(i=0,j=str.size()-1;i<str.size()/2;i++,j--)
    {
        if(str[i]!=str[j])
            break;
    }
    if(i>=str.size()/2)
        return 1;

    return 0;
}

int main()
{
     // freopen("353i.txt","r",stdin);
    //  freopen("353o.txt","w",stdout);
    string str;

    while(cin>>str)
    {
        int i,j,k,l,count=0;
        set<string>s;

     //   cout<<str<<endl;

        for(i=0;i<str.size();i++)
        {
            char pal[2];
            int x=0;

            pal[x++]=str[i];
            pal[x]='\0';

            cout<<pal<<endl;
            int a=s.size();

            s.insert(pal);

            if(s.size()>a)
            {
                int b=pallindrome(pal);

                if(b==1)
                    count++;

                cout<<count<<endl;
            }
        }

        for(i=1;i<str.size();i++)
        {
            int x=0,m=0;
        //    cout<<"i= "<<i<<endl;

            for(j=0;j<(str.size()-i);j++)
            {
                x=0;
             //   cout<<"j= "<<j<<endl;
                char pal[82];

                pal[x++]=str[j];

                for(k=j+1,m=1;m<i;k++,m++)
                {
                  //  cout<<"k= "<<k<<endl;
                //    cout<<"m= "<<m<<endl;
                    pal[x++]=str[k];
                }

                for(l=j+m;l<str.size();l++)
                {
                    pal[x++]=str[l];
                    pal[x]='\0';
                  //  cout<<"l= "<<l<<endl;
                    cout<<pal<<endl;
                    int a=s.size();

                    s.insert(pal);

                    if(s.size()>a)
                    {
                        int b=pallindrome(pal);

                        if(b==1)
                            count++;

                        cout<<count<<endl;
                    }

                    x-=1;
                }
            }
        }
    }

    return 0;
}

