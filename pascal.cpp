#include<stdio.h>
int giaithua(int n){
	
	
	if(n==1||n==0) return 1;
	return n*giaithua(n-1);
}
int main(){

int t; scanf("%d",&t);
for(int i=0;i<t;i++){
	int n=i;
	for(int j=0;j<=i;j++){
		int k=j;
		printf("%d ",giaithua(n)/(giaithua(k)*giaithua(n-k)));
	}
	printf("\n");
}
}