#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int snt( int n ){
	if(n<2) return 0;
	
	for( int i =2 ; i<=sqrt(n) ; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
// qsort
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int kiluc = -1;
	int hangmax;
	for(int i = 0 ;i<n;i++){
		int dem = 0;
		for(int j =0;j<n;j++){
			if(snt(a[i][j])){
				++dem;
			}
			
			}
			if(dem > kiluc){
				kiluc = dem;
				hangmax = i;
			}
		}
		printf("%d",hangmax);
	}

