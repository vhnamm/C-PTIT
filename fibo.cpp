#include<stdio.h>
long long fb[93];
void fibo(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<=92;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}

int main(){
	fibo();
	int n;scanf("%d",&n);
	int i=0;
	while(i<n){
		printf("%lld ",fb[i]);
		i++;
	}
	
	
}
