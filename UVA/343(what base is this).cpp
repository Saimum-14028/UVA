#include<bits/stdc++.h>
using namespace std;

int power(int base,int pow)
{
    int i=pow,ans=1;

    while(i--)
        ans*=base;

    return ans;
}

int main()
{
    string X,Y;

    while(cin>>X>>Y)
    {
        int xi=2,yi=2,i;

        for(i=0;i<X.size();i++)
       {
            if(X[i]>='0'&&X[i]<='9')
            {
                if((X[i]-'0'+1)>xi)
                    xi=X[i]-'0'+1;
            }
            else
            {
                if((X[i]-54)>xi)
                    xi=X[i]-55+1;
            }
       }

       for(i=0;i<Y.size();i++)
       {
            if(Y[i]>='0'&&Y[i]<='9')
            {
                if((Y[i]-'0'+1)>yi)
                    yi=Y[i]-'0'+1;
            }
            else
            {
                if((Y[i]-54)>yi)
                    yi=Y[i]-55+1;
            }
       }
       // cout<<X<<endl<<Y<<endl;
      // cout<<xi<<endl<<yi<<endl;

      int count=0,p,q,c,d,j,k,l;

      for(i=xi;i<37;i++)
      {
          p=0,c=0;

          for(k=X.size()-1;k>=0;k--)
          {
              if(X[k]>='0'&&X[k]<='9')
                p+=(X[k]-'0')*power(i,c);
              else
                p+=(X[k]-55)*power(i,c);

              c++;
          }
           // cout<<p<<endl<<endl;
          for(j=yi;j<37;j++)
          {
              q=0,d=0;

              for(k=Y.size()-1;k>=0;k--)
              {
                  if(Y[k]>='0'&&Y[k]<='9')
                    q+=(Y[k]-'0')*power(j,d);
                  else
                    q+=(Y[k]-55)*power(j,d);

                  d++;
              }
             //   cout<<q<<endl;
             if(p==q)
             {
                 count=1;
                 break;
             }
          }

          if(count==1)
            break;
      }

      if(count==1)
        printf("%s (base %d) = %s (base %d)\n",X.c_str(),i,Y.c_str(),j);
      else
        printf("%s is not equal to %s in any base 2..36\n",X.c_str(),Y.c_str());

    }
    return 0;
}
