#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int sum;
    int i,j,T,N,c;
    int arr[1000];
    double r;
    cin>>T;
    for(i=0;i<T;i++)
    {
        sum=0;
        c=0;
        cin>>N;
        for(j=0;j<N;j++)
        {
            cin>>arr[j];
            sum=sum+arr[j];
        }
        sum=sum/N;
        for(j=0;j<N;j++)
        {
            if(sum<arr[j])
                c++;
        }
        r=(double)c/N;
        r=r*100;
        printf("%.3lf%%\n",r);
    }
    return 0;
}
