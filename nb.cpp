#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i= 2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return n>1;
}
int check(int n){
	int a[100];
	int sochuso = 0;
	while(n){
		a[sochuso] = n%10;
		++sochuso;
		n/=10;
	}
	
	int l=0,r=sochuso-1;
	while(l<r){
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;--r;
	}
	int pre_sum=0;
	int after_sum=0;
	if(sochuso%2==0){
		for(int i=0;i<sochuso/2;i++){
			pre_sum = pre_sum * 10 + a[i];
		}
		for(int i= sochuso/2;i<sochuso;i++){
			after_sum = after_sum * 10 +a[i];
		}
	}
	
	else{
		for(int i=0 ; i< sochuso/2; i++){
			pre_sum = pre_sum * 10 + a[i]; 
		}
		for(int i= sochuso/2+1; i<sochuso;i++){
			after_sum = after_sum *10 +a[i];
		}
	}
	
	return nt(pre_sum + after_sum);
	
}
int main(){
int k; scanf("%d",&k);
	for(int i=1;i<k;i++){
		if(check(i))
			printf("%d ",i);
	}

}
