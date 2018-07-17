#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("401i.txt","r",stdin);
	//freopen("401o.txt","w",stdout);

	char str[100],s[22];

	memset(str,'0',sizeof str+3);

	///cout<<str<<endl;

	str['A']='A';
	str['E']='3';
	str['H']='H';
	str['I']='I';
	str['J']='L';
	str['L']='J';
	str['M']='M';
	str['O']='O';
	str['S']='2';
	str['T']='T';
	str['U']='U';
	str['V']='V';
	str['W']='W';
	str['X']='X';
	str['Y']='Y';
	str['Z']='5';
	str['1']='1';
	str['2']='S';
	str['3']='E';
	str['5']='Z';
	str['8']='8';

	///cout<<str<<endl;

	while(scanf("%s",s)!=EOF)
	{
		int m=0,p=0,i,x,j;

		x=strlen(s);

		for(i=0,j=x-1;i<=x/2;i++,j--)
		{
			if(s[i]!=s[j])
				p=1;
			if(str[s[i]]!=s[j])
				m=1;
		}

		if(m==0&&p==0)
			printf("%s -- is a mirrored palindrome.\n\n",s);
		else if(m==0)
			printf("%s -- is a mirrored string.\n\n",s);
		else if(p==0)
			printf("%s -- is a regular palindrome.\n\n",s);
		else
			printf("%s -- is not a palindrome.\n\n",s);
	}

	return 0;
}
