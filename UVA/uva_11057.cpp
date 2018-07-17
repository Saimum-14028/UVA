//Bismillahir Rahmanir Rahim
#include<stdio.h>
int main()
{
	int i,j,t,sum,num[100005],temp1,temp2,key,max,l,r;
	while(scanf("%d",&t)!=EOF){
		for(i=0;i<t;i++){
			scanf("%d",&num[i]);
		}
		scanf("%d",&sum);
		for(i=1;i<t;i++){
			key=num[i];
			j=i-1;
			while(num[j]>key){
				num[j+1]=num[j];
				j=j-1;
			}
			j=j+1;
			num[j]=key;
		}
		l=0;
		r=t-1;
		while(r>l){
			if((num[l]+num[r])<sum){
				l++;
			}
			else if((num[l]+num[r])>sum){
				r--;
			}
			else if((num[l]+num[r])==sum){
					temp1=num[l];
					temp2=num[r];
					l++;
					r--;
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n",temp1,temp2);
		printf("\n");
	}
	return 0;
}
