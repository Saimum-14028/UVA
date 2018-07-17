#include<stdio.h>

int main()
{
    long long a,b,c,t,i=1;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a+b<=c || a+c<=b || b+c<=a||a<=0||b<=0||c<=0)
            printf("Case %lld: Invalid\n",i++);
        else if((a+b>c && a+c>b && b+c>a) && (a==b&&a==c))
               printf("Case %lld: Equilateral\n",i++);
        else if((a+b>c && a+c>b && b+c>a) && (a==b || b==c || a==c))
            printf("Case %lld: Isosceles\n",i++);
        else if((a+b>c && a+c>b && b+c>a) && (a!=b && b!=c && a!=c))
            printf("Case %lld: Scalene\n",i++);
    }
    return 0;
}
