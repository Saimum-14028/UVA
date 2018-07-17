#include <bits/stdc++.h>
using namespace std;

#define Mx 2000010

bool prime[Mx];
void primeGen(){
	memset(prime,true,sizeof(prime));
	int n = sqrt(Mx);
	for(int i = 3;i<n;i+=2){
		if(prime[i]){
			for(int j = i*i;j<Mx;j+=2*i){
				prime[j]= false;
			}
		}
	}
}
vector<int> pNum;
void pusher(){
	pNum.push_back(2);
	for(int i = 3;i<Mx;i+=2){
		if(prime[i]) pNum.push_back(i);
	}
}
vector< pair<int,int> > ans;
void ansGen(){
	ans.push_back(make_pair(1,1));
	int sz = pNum.size();
	for(int i = 2;i<Mx;i++){
		int num = i,cnt = 0;
		for(int j = 0;j<sz  && pNum[j]*pNum[j]<=num;j++){
			int x = pNum[j];
			if(num%x == 0){
				while(num%x == 0){
					cnt++;
					num/=x;
				}
			}
		}
		if(num>1){
			cnt++;
		}
		pair<int,int> p = make_pair(cnt,i);
		ans.push_back(p);
	}
}

int main() {
    freopen("11353i.txt","r",stdin);
    freopen("11353o.txt","w",stdout);

	primeGen(),pusher(),ansGen();
	sort(ans.begin(),ans.end());
	int num,cs = 1;
	while(scanf("%d",&num)==1 && num){
		printf("Case %d: %d\n",cs,ans[num-1].second);
		cs++;
	}
	return 0;
}


