#include<stdio.h>
#include<math.h>
#define ll long long

void solve(ll n){
	int dem=0;
	
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0 ){
			if(i%2==0)
				dem++;
			if(n/i%2==0){
				dem++;
			}
		
			if(i%2==0 && i*i==n){
				dem--;
			}
		}
	}
	printf("%d",dem);

}
int main(){
int t;scanf("%d",&t);
while(t--){
	ll n;scanf("%lld",&n);
	solve(n);
	
	printf("\n");
	
}

	
}