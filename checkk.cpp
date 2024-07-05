#include<stdio.h>
#include<math.h>
int tachvatong(long n){
	long sum=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum+=i;
			n/=i;
		}
	}
	if(n!=1) sum+=n;
	return sum;
}

int main(){
	
int n;scanf("%d",&n);
long long sum=0;
for(int i=2;i<=n+1;i++){
	long a; scanf("%ld",&a);
	sum+=tachvatong(a);		
}
printf("%lld",sum);
}
