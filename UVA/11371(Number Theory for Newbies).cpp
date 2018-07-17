#include<bits/stdc++.h>
using namespace std;

int main()
{
   string k;
   long long int a=0,b=0;

   while(cin >> k)
    {
        a=0,b=0;
        for(int i=0;i<k.size();i++)
        {
            for(int j=i+1;j<k.size();j++)
            {
                if(k[i]<k[j])
                {
                    int temp = k[i];
                    k[i]= k[j];
                    k[j]= temp;
                }
            }
        }

        for(int i=0; i<k.size();i++)
        {
            b = b*10 + k[i]-48;
        }


     ///   cout << b <<endl;

        for(int i=0;i<k.size();i++)
        {
            for(int j=i+1;j<k.size();j++)
            {
                if(k[i]>k[j])
                {
                    if(i!=0)
                    {
                        int temp = k[i];
                        k[i]= k[j];
                        k[j]= temp;
                    }
                    else
                    {
                        if(k[j]!='0')
                        {
                            int temp = k[i];
                            k[i]= k[j];
                            k[j]= temp;
                        }
                    }
                }
            }
        }

         for(int i=0; i<k.size();i++)
         {
            a = a*10 + k[i]-48;
        }

       /// cout << a <<endl;

     long long int m;
     m = b-a;
     long long int p = m/9;
    printf("%lld - %lld = %lld = 9 * %lld\n", b,a,m,p);
   }
    return 0;
}

