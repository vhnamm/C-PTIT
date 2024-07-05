#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int a[n][n];
	
	int tren=0, duoi=n-1, trai=0, phai=n-1;
	int num=1;
	while(num <= n*n){
		for(int i= trai; i<=phai; i++){
			a[tren][i]=num;
			num++;
		}
		tren++;
		for(int i=tren; i<= duoi;i++){
			a[i][phai] = num;
			num++;
		}
		phai--;
		for(int i=phai ; i>=trai;i--){
			a[duoi][i] =num;
			num++;
		}
		duoi--;
		for(int i=duoi ;i>=tren;i--){
			a[i][trai]=num;
			num++;
		}
		trai++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
