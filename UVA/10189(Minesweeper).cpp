#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("10189i.txt","r",stdin);
  //  freopen("10189o.txt","w",stdout);

    int n,m,count=0,i,j;

    while(cin>>n>>m)
    {
        count++;

        char str[n+3][m+3],ch;

        if(n==0&&m==0)
            return 0;

        if(count>1)
            cout<<endl;

        for(i=0;i<1;i++)
        {
            for(j=0;j<m+2;j++)
                str[i][j]='.';
        }

        for(i=1;i<n+1;i++)
        {
            for(j=0;j<m+2;j++)
            {
                if(j==0||j==m+1)
                    str[i][j]='.';
                else
                {
                    cin>>ch;
                    str[i][j]=ch;
                }
            }
        }

        for(i=n+1;i<n+2;i++)
        {
            for(j=0;j<m+2;j++)
                str[i][j]='.';
        }

   /*     for(i=0;i<n+2;i++)
        {
            for(j=0;j<m+2;j++)
                cout<<str[i][j];
            cout<<endl;
        }*/

        cout<<"Field #"<<count<<":"<<endl;

        for(i=1;i<n+1;i++)
        {
            for(j=1;j<m+1;j++)
            {
                if(str[i][j]=='*')
                    cout<<'*';
                else
                {
                    int count=0;

                    if(str[i][j+1]=='*')
                        count++;
                    if(str[i][j-1]=='*')
                        count++;
                    if(str[i+1][j+1]=='*')
                        count++;
                    if(str[i+1][j-1]=='*')
                        count++;
                    if(str[i-1][j+1]=='*')
                        count++;
                    if(str[i-1][j-1]=='*')
                        count++;
                    if(str[i+1][j]=='*')
                        count++;
                    if(str[i-1][j]=='*')
                        count++;

                    cout<<count;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

