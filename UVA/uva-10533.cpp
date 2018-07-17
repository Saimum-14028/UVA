#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
//int Total;
int anotherprime(int a)
{
    int CHECK = 1;

    if(a==2||a==3||a==5||a==7)
        return 1;

    for(int i=2;i<=sqrt(a);i++)
    {
         //Total++;
        if(a%i==0)
        {
            CHECK = 4;
            return 2;
        }
    }

    if(CHECK==1)
        return 1;
}


int prime(int arr[],int check,int m)
{
    int Copycheck,sqr=sqrt(check),CHECK=1;

    if(check==1)
        return 2;

    if(check==2||check==3||check==5||check==7)
        return 1;

    for(int k=0;k<m;k++)
    {
        //Total++;
        if(arr[k]>=sqrt(check)+1)
            break;

        if(check%arr[k]==0)
        {
            CHECK = 4;
            return 2;
        }

    }

    if(CHECK==1)
        return 1;
}


int main()
{
    int num,arr[1000],m=0,alamin,count=0,in,t1,t2,n;

    scanf("%d",&n);
    for(in=0;in<n;in++)
    {
        count=0;
        m=0;
        scanf("%d %d",&t1,&t2);

        for(int j=t1;j<=sqrt(t2);j++)
        {
            //Total++;
            alamin = anotherprime(j);   ///function call

            if(alamin==1)
            {
                arr[m] = j;
                m++;
            }
        }

        for(int i=t1;i<=t2;i++)
        {
            //Total++;
            int cary = prime(arr,i,m);
            if(cary==1)
            {
                count++;
               // cout << i << " ";
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

