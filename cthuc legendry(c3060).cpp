#include<stdio.h>
#include<math.h>
int legendry(int n, int k){
	int mumax=0;
	for(int i=2;i<=n;i*=2){
		mumax+=n/i;
	}
	if(mumax>=k) return 1;
	return 0;
	
}
int main(){
	int n,k;scanf("%d %d",&n,&k);
	if(legendry(n,k))
		printf("Yes");
	else
		printf("No");
}

