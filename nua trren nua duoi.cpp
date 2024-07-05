#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i =2 ;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
		
	}
	return n>1;
}
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	for(int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	
	int cntTren = 0;
	for(int i =0;i<n-1;i++){
		for(int j =0;j<n;j++){
			if(j>i && nt(a[i][j])){
				++cntTren;
			}
		}
	}
	int cntDuoi = 0;
	for(int i =1;i<n;i++){
		for(int j =0;j<n;j++){
			if(j<i && nt(a[i][j])){
				++cntDuoi;
			}
		}
	}
	
	if(cntDuoi < cntTren) printf("28tech");
	else if(cntDuoi>cntTren) printf("29tech");
	else printf("30tech");
}

