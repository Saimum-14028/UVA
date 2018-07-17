#include <bits/stdc++.h>
#define sci1(a) scanf("%d",&a)       ///single int input
#define sci2(a,b) scanf("%d%d",&a,&b)
#define sci3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define csprint(a) printf("Case %d: ",a++)
#define prl1(a) printf("%lld",a)
#define prl2(a,b) printf("%lld %lld",a,b)
#define pri1(a) printf("%d ",a)
#define pri2(a,b) printf("%d %d",a,b)
#define spaceprint printf(" ")
#define lineprint printf("\n")
#define infile freopen("pfin.txt","r",stdin)
#define outfile freopen("pfout.txt","w",stdout)

using namespace std;

int main()
{
    freopen("160i.txt","r",stdin);
    freopen("160o.txt","w",stdout);

    vector<int>v;
    int n,arr[100000];
    while(sci1(n)){
        if(n==0)
        break;
    int m=n,p=n-1,ct=1,j=0,l=n,cs=0,mk=0;
    while(n--){
        int sqrtn=sqrt(m);
        for(int i=2 ; i<=sqrtn ; i++){
            if(m%i==0)
            {
                while(m%i==0)
                {
                    arr[j++]=i;
                    m=m/i;
                }
            }
        }
        if(m>1)
        arr[j++]=m;
        m=p--;
    }
        sort(arr,arr+j);
        if(l<10)
            printf("  %d! =",l);
        else if(l<100)
            printf(" %d! =",l);
        else
            printf("%d! =",l);

        for(int k=0 ; k<j ; k++){
            if(arr[k]==arr[k+1]){
                ct++;
                continue;
                }
            else{
                v.push_back(ct);
                ct=1;
                }
            }
            int ckk=0;
            for(int i=0 ; i<v.size() ; i++){
                ckk++;
                if(v.size()==15){
                    if(v[i]<10)
                        cout<<"  "<<v[i];
                    else if(v[i]<100)
                        cout<<" "<<v[i];
                    else
                        cout<<v[i];
                }
                else{
                    if(ckk%16==0){
                        lineprint;
                        cout<<"      ";
                        ckk=0;
                    }
                    if(v[i]<10)
                        cout<<"  "<<v[i];
                    else if(v[i]<100)
                        cout<<" "<<v[i];
                    else
                        cout<<v[i];
                }
            }
        lineprint;
        v.clear();
    }

    return 0;
}
