#include<bits/stdc++.h>
using namespace std;

vector<long long>p;
long long a,b;

p.push_back(2);

for(b=3;b<2147483648;b+=2)
{
    for(a=3;a*a<=b;a+=2)
    {
        if(b%a==0)
            break;
    }

    if(a*a>b)
        p.push_back(b);
}

int main()
{
 //   freopen("583i.txt","r",stdin);
 //   freopen("583o.txt","w",stdout);

    long long n,i,j,t;
    vector<long long>v;

    while(cin>>n)
    {
        if(n==0)
            return 0;
        else if(n==1||n==-1)
            cout<<n<<" = "<<n<<endl;
        else
        {
            if(n<0)
            {
                n=-n;
                t=n;
                i=0;

                while(1)
                {
                    if(t%p[i]==0)
                    {
                        v.push_back(p[i]);
                        t=t/p[i];
                    }
                    else
                    {
                        p[i++];
                    }

                    if(t==1)
                        break;

                    if(p[i]>sqrt(n))
                    {
                        v.push_back(t);
                        break;
                    }
                }

                cout<<-n<<" = "<<-1<<" x";

                for(j=0;j<v.size();j++)
                {
                    if(j==v.size()-1)
                        cout<<" "<<v[j]<<endl;
                    else
                        cout<<" "<<v[j]<<" x";
                }

                v.clear();
            }
            else
            {
                t=n;
                i=0;

                while(1)
                {
                     if(t%p[i]==0)
                    {
                        v.push_back(p[i]);
                        t=t/p[i];
                    }
                    else
                    {
                        p[i++];
                    }

                    if(t==1)
                        break;

                    if(p[i]>sqrt(n))
                    {
                        v.push_back(t);
                        break;
                    }
                }

                cout<<n<<" =";

                for(j=0;j<v.size();j++)
                {
                    if(j==v.size()-1)
                        cout<<" "<<v[j]<<endl;
                    else
                        cout<<" "<<v[j]<<" x";
                }

                v.clear();
            }
        }
    }
    return 0;
}
