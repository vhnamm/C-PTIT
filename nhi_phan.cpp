#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int len=0;
	int b[1005];
	if(a==0) printf("0");
	while(a){
		b[len++]=a%2;
		a/=2;
	}
	for(int i=len-1;i>=0;i--){
		printf("%d",b[i]);
	}
	
}

