#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("612i.txt","r",stdin);
    freopen("612o.txt","w",stdout);

    int t,n,m,i,ans,x,j;

    scanf("%d",&t);

    while(t--)
    {
        multimap<int,string>mp;
        string str;

        scanf("%d %d",&n,&m);

        int cnt[n+1][4];

        for(i=0;i<m;i++)
        {
            memset(cnt,0,sizeof cnt);

            cin>>str;

            x=str.size();
            ans=0;

            for(j=x-1;j>=0;j--)
            {
              //  cout<<ans<<endl;

                if(str[j]=='A')
                {
                    cnt[j][0]=cnt[j+1][0]+1;
                    cnt[j][1]=cnt[j+1][1];
                    cnt[j][2]=cnt[j+1][2];
                    cnt[j][3]=cnt[j+1][3];
                    //cout<<cnt[j][0]<<endl;
                }
                else if(str[j]=='C')
                {
                    cnt[j][0]=cnt[j+1][0];
                    cnt[j][1]=cnt[j+1][1]+1;
                    cnt[j][2]=cnt[j+1][2];
                    cnt[j][3]=cnt[j+1][3];
                    //cout<<cnt[j][0]<<endl;
                }
                else if(str[j]=='G')
                 {
                    cnt[j][0]=cnt[j+1][0];
                    cnt[j][1]=cnt[j+1][1];
                    cnt[j][2]=cnt[j+1][2]+1;
                    cnt[j][3]=cnt[j+1][3];
                    //cout<<cnt[j][0]<<endl;
                }
                else if(str[j]=='T')
                 {
                    cnt[j][0]=cnt[j+1][0];
                    cnt[j][1]=cnt[j+1][1];
                    cnt[j][2]=cnt[j+1][2];
                    cnt[j][3]=cnt[j+1][3]+1;
                    //cout<<cnt[j][0]<<endl;
                }
            }

            for(j=0;j<x;j++)
            {
              //  cout<<ans<<endl;

                if(str[j]=='C')
                    ans+=cnt[j][0];
                else if(str[j]=='G')
                    ans+=cnt[j][0]+cnt[j][1];
                else if(str[j]=='T')
                    ans+=cnt[j][0]+cnt[j][1]+cnt[j][2];
            }

         //   cout<<ans<<endl;

            mp.insert(make_pair(ans,str));
        }

        multimap<int,string>::iterator it=mp.begin();

        for(it=mp.begin();it!=mp.end();it++)
            cout<<it->second<<endl;

        if(t)
            printf("\n");
    }
    return 0;
}
