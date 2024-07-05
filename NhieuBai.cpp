#include<stdio.h>
#include<math.h>
#define ll long long
ll min(ll a, ll b, int cntA, int cntB){
	ll X1=0, X2=0;
	while(cntA){
		int x=a/pow(10,cntA-1);
		if(x==6)
			x=5;
		X1=X1*10+x;
		ll du=pow(10,cntA-1);
		a=a%du;
		cntA--;	
		
	}
	while(cntB){
		int x=b/pow(10,cntB-1);
		if(x==6)
			x=5;
		X2=X2*10+x;
		ll du=pow(10,cntB-1);
		b= b%du;
		cntB--;	
		
	}
	
	ll sum=X1+X2;
	return sum;
}
ll max(ll a, ll b, int cntA, int cntB){
	ll X1=0, X2=0;
	while(cntA){
		int x=a/pow(10,cntA-1);
		if(x==5)
			x=6;
		X1=X1*10+x;
		ll du=pow(10,cntA-1);
		a=a%du;
		cntA--;	
		
	}
	while(cntB){
		int x=b/pow(10,cntB-1);
		if(x==5)
			x=6;
		X2=X2*10+x;
		ll du=pow(10,cntB-1);
		b= b%du;
		cntB--;	
		
	}
	
	ll sum=X1+X2;
	return sum;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		ll a, b;
		scanf("%lld %lld",&a,&b);
		ll x1=a, x2=b;
		int cntA=0, cntB=0;
		while(a){
			a/=10;
			cntA++;
		}
		while(b){
			b/=10;
			cntB++;
		}
		printf("%lld %lld",min(x1,x2,cntA,cntB),max(x1,x2,cntA,cntB));
		printf("\n");
	}
}
