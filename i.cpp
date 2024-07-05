#include <stdio.h>
#include <math.h>
int prime(int n){
	int m=n;
	int sum=0,check=0;
	while(m){
		sum+=m%10;
		m/=10;
	}
	if(sum%5!=0) return 0;
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
		{
			return 0;
			break;
		}
	}
	
}
int main(){
	int n;scanf("%d",&n);
	int cnt=0;
	for(int i=0;i<n;i++){
		if(prime(i)){
			++cnt;
			printf("%d ",i);
		}
	}
	printf("\n%d",cnt);
}
