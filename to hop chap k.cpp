#include<stdio.h>
int C_k_n(int n, int k){
	if(n<k) return 0;
	if(k==0 || k==n)
		return 1;
	return C_k_n(n-1 , k-1) + C_k_n(n-1 , k);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int chan=0,le=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0)
			chan++;
		else le++;
	}
	printf("%d",C_k_n(chan,2) + C_k_n(le,2));
}
