#include<stdio.h>
#include<math.h>
int nto(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int m;scanf("%d",&m);
	int a[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		for(int j=i;j<m;j++){
			if(nto(a[i][j])){
				sum+=a[i][j];
			}
		}
	}
	printf("%d",sum);
}
