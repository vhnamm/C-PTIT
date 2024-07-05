#include<stdio.h>
#include<math.h>

int snt( int n ){
	if(n<2) return 0;
	
	for( int i =2 ; i<=sqrt(n) ; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int t;scanf("%d",&t);
	for(int j = 1 ; j <= t ; j++){
		
		int n; scanf("%d",&n);
		
		int a[n];
		
		for(int i=0 ; i<n ;i++){
			scanf("%d", &a[i]);
		}
		
		for(int i=0 ; i<n; i++){
			if( snt(a[i]) == 1 ){
				printf("%d ",a[i]);
			}
		}
	}
}

