#include<stdio.h>
int legendry(int n, int k){
	int mumax=0;
	for(int i=k;i<=n;i*=k){
		mumax+=n/i;
	}
	return mumax;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n,p ;scanf("%d %d",&n,&p);
		printf("%d\n",legendry(n,p));
	}
	
}
