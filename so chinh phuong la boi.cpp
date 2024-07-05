#include<stdio.h>
#include<math.h>
int main(){
	int n;scanf("%d",&n);
	long long  m = n;
	for(int i=2;i<=sqrt(n);i++){
		int mu = 0;
		while(n%i==0){
			++mu;
			n/=i;
		}
		if(mu % 2 !=0){
			m*=i;
		}
	}
	if(n!=1) m*=n;
	printf("%lld",m);
}
