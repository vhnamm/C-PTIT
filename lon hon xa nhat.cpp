#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
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
for(int i=0;i<n;i++){
	for(int j =0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
}
int x,y;
int resHang = -1;
int resCot = -1;
for(int i=0;i<n;i++){
	int cnt=0;
	for(int j=0;j<n;j++){
		if(nt(a[i][j])){
			++cnt;
		}
	}
	if(cnt >= resHang){
		resHang = cnt;
		x = i;
	}		
}
	for(int i =0;i<n;i++){
		int res = -1, cnt = 0;
		for(int j=0;j<n;j++){
			if(nt(a[j][i])){
				++cnt;
			}
		}
		if(cnt >= resCot){
			resCot = cnt;
			y = i;
		}
	}
	
	for(int i =0;i<n;i++){
		if(i!=x){
			for(int j =0;j<n;j++){
			if(j!=y){
				printf("%d ",a[i][j]);
			}
		}
		
	}
		printf("\n");
	}
}
