#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    vector<string>v;

    v.push_back("0");
    v.push_back("1");

    for(i=2;i<5001;i++)
    {
        int a=v[i-2].size();
        int b=v[i-1].size();
        char str[1100],rev[1100];
        int carry=0;
        cout<<a<<endl<<b<<endl;
        for(j=0;j<a;j++)
        {
            str[j]=(v[i-1][j]-'0')+(v[i-2][j]-'0')+carry;
            carry=0;

            if(str[j]>9)
            {
                carry=1;
                str[j]-=10;
            }

            str[j]+='0';
        }

        for(j=a;j<b;j++)
        {
            str[j]=(v[i-1][j]-'0')+carry;
            carry=0;

            if(str[j]>9)
            {
                carry=1;
                str[j]-=10;
            }

            str[j]+='0';
        }

//        if(carry>0)
//            str[j++]=carry+'0';

        str[j]='\0';

        for(j=strlen(str)-1,k=0;j>=0;j--,k++)
            rev[k]=str[j];
        rev[k]='\0';
        v.push_back(rev);
    }

    while(cin>>n)
        cout<<v[n]<<endl;;
    return 0;
}

