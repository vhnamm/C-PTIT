#include<stdio.h>
#include<math.h>
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
int solve(int n){

	int ok1=1;
	int m=n;
	while(m){
		int x=m%10;
		if(!nto(x)){
			ok1=0;
			break;
		}
		m/=10;
	}
	int ok2=0,sum=0;
	int k=n;
	while(k){
		sum+=k%10;
		k/=10;
	}
	if(nto(sum)) ok2=1;
	
	if(ok1 && ok2) return 1;
	else return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int l,r; scanf("%d %d",&l,&r);
		int cnt=0;
		for(int i=l;i<=r;i++){
			if(nto(i)&&solve(i))
				cnt++;
		}
		printf("%d\n",cnt);
	}
}

