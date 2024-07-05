#include <string.h>
#include<stdio.h>
#include<math.h>
int prime(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);	
	
	while(t--){
		long long l,r;scanf("%lld %lld",&l,&r);
		int dem=0;
		for(long long i=sqrt(l);i<=sqrt(r);i++){
			if(prime(i)) ++dem;
		}
		printf("%d",dem);
	
		printf("\n");
	
}
	
}

