#include <stdio.h>
long long gcd(long long a, long long b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		long long res=1;
		for(long long i=2;i<=n;i++){
			long long x=gcd(res,i);
			res= res*i/x;
		}
		printf("%lld\n",res);
	}
}

