#include<stdio.h>
#include<math.h>
	long long fibo[93];
int tach(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return n>1;
}
int checkfibo(int n){

	int ok=0;
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<93;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
		
		}
	for(int i=0;i<93;i++){
		if(tach(n)==fibo[i]){
			ok=1;
		}		
	}
	
	return ok;
}
int max(int a,int b){
	return a>=b? a:b;
}
int min(int a,int b){
	return a<b? a:b;
}
int main(){
int n,m;scanf("%d %d",&n,&m);
for(int i=min(n,m);i<=max(n,m);i++){
	if(checkfibo(i) && snt(i)){
		printf("%d ",i);
	}
}
}