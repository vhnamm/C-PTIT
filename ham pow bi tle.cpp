#include<stdio.h>
#include<string.h>

int check(long n){
	while(n){
		int x=n%10;
		int y=n/10%10;
		if(y>x){
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
int pow(int n){
	int k=1;
	for(int i=1;i<=n;i++){
		k*=10;
	}
	return k;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		
		int n;scanf("%d",&n);
		int l=pow(n-1);// -----n?u d? trong vòng for thì s? b? TLE vì hàm pow cx tính nhu hàm for----
		int r=pow(n);
		for(long i=l;i<r;i++){
			if(check(i)){
				printf("%ld ",i);
			}
		}
		printf("\n");
	}
}