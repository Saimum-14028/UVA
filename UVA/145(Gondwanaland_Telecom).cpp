#include<bits/stdc++.h>
using namespace std;

double A[3]={0.10,0.06,0.02};
double B[3]={0.25,0.15,0.05};
double C[3]={0.53,0.33,0.13};
double D[3]={0.87,0.47,0.17};
double E[3]={1.44,0.80,0.30};

int hour[24],cnt[3],i;

int main()
{
	for(i=0;i<8;i++)
		hour[i]=2;
	for(i=8;i<18;i++)
		hour[i]=0;
	for(i=18;i<22;i++)
		hour[i]=1;
	hour[22]=hour[23]=2;

	string str1,str2;
	int w,x,y,z,a,b,c;
	double ans;

	while(cin>>str1)
	{
		if(str1=="#")
			return 0;

		cin>>str2;
		scanf("%d%d%d%d",&w,&x,&y,&z);

		if(w<=y)
		{
			for(i=w;i<=y;i++)
				cnt[hour[i]]++;
		}
		else
		{
			for(i=w;i<24;i++)
				cnt[hour[i]]++;
			for(i=0;i<=y;i++)
				cnt[hour[i]]++;
		}

		for(i=0;i<3;i++)
			cout<<cnt[i]<<endl;

		if(x<=z)
		{
			a=b=c=ans=0;

			if(cnt[0])
			{
				a=(cnt[0]-1)*60+z-x;

				if(str1=="A")
				{

				}
				else if(str1=="B")
				{

				}
				else if(str1=="C")
				{

				}
				else if(str1=="D")
				{

				}
				else if(str1=="E")
				{

				}
				ans+=str1[0]*a;
				cout<<str1[0]<<endl;
			}
			if(cnt[1])
			{
				b=(cnt[1]-1)*60+z-x;
				ans+=str1[1]*b;
			}
			if(cnt[2])
			{
				c=(cnt[2]-1)*60+z-x;
				ans+=str1[2]*c;
			}

			printf("%10s%6d%6d%6d%3s%8.2lf\n",str2.c_str(),a,b,c,str1.c_str(),ans);
		}
		else
		{

		}
	}
	return 0;
}
