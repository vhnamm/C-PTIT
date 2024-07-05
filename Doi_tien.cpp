#include<stdio.h>
int main(){
	int menhgia[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	int res=0;
	for(int i=9;i>=0;i--){
		while(n>=menhgia[i]){			
			n-=menhgia[i];
			++res;
		}
		
	}
	if(n==0) printf("%d",res);
		printf("\n");
	}
	
}
