#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("119i.txt","r",stdin);
   // freopen("119o.txt","w",stdout);

    int t,x,n,i,j,k,count=0;

    while(cin>>t)
    {
        if(count>0)
            cout<<endl;

        string str[t],s;
        int arr[t]={0};

        for(i=0;i<t;i++)
            cin>>str[i];

        for(i=0;i<t;i++)
        {
            cin>>s>>x>>n;

            if(x>0&&n>0)
            {
                for(j=0;j<t;j++)
                {
                    if(str[j]==s)
                    {
                        arr[j]-=(int)(x/n)*n;
                        break;
                    }
                }
                for(j=0;j<n;j++)
                {
                    cin>>s;

                    for(k=0;k<t;k++)
                    {
                        if(str[k]==s)
                        {
                            arr[k]+=x/n;
                            break;
                        }
                    }
                }
            }
            else
            {
                for(j=0;j<n;j++)
                    cin>>s;
            }
        }
        for(i=0;i<t;i++)
            cout<<str[i]<<' '<<arr[i]<<endl;

        count++;
    }
    return 0;
}




