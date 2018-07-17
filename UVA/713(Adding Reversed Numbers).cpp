 #include<bits/stdc++.h>
using namespace std;

int main()
{
  //  freopen("713i.txt","r",stdin);
  //  freopen("713o.txt","w",stdout);

    char num1[202],num2[202];
    int n;

    while(cin>>n)
    {
        while(n--)
        {
            cin>>num1>>num2;

            int a=strlen(num1);
            int b=strlen(num2);
            int i,j,k=b,l=a;

       //     cout<<a<<endl<<b<<endl<<num1<<endl<<num2<<endl;

            if(a>b)
            {
                for(j=0;j<a-b;j++)
                    num2[k++]='0';
            }
            else if(a<b)
            {
                for(j=0;j<b-a;j++)
                    num1[l++]='0';
            }

            num1[l]='\0';
            num2[k]='\0';

             a=strlen(num1);
             b=strlen(num2);

         //   cout<<a<<endl<<b<<endl<<num1<<endl<<num2<<endl;

             int carry=0;
             char sum[205];

             for(i=0;i<a;i++)
             {
                 num1[i]=num1[i]-'0';
                 num2[i]=num2[i]-'0';

                 sum[i]=num1[i]+num2[i]+carry;
                 carry=0;

                 if(sum[i]>9)
                 {
                     sum[i]-=10;
                     carry=1;
                 }

                 sum[i]+='0';
             }

             if(carry==1)
                sum[i++]=1+'0';

             sum[i]='\0';

             int c=strlen(sum);

          //   cout<<c<<endl;

            if(c==1)
                cout<<sum<<endl;
            else
            {
                for(i=0;i<c;)
                 {
                     if(sum[i]!='0')
                        break;
                    else
                        i++;
                 }

                 for(j=i;j<c;j++)
                    cout<<sum[j];

                 cout<<endl;
            }
        }
    }
    return 0;
}

