#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	for(int k=1;k<=t;k++){
		
		
	int n;scanf("%d",&n);
	int a[n][n];
	
	int tren=0, duoi=n-1, trai=0, phai=n-1;
	int num=n*n;
	while(num>=1){
		for(int i= trai; i<=phai; i++){
			a[tren][i]=num;
			num--;
		}
		tren++;
		for(int i=tren; i<= duoi;i++){
			a[i][phai] = num;
			num--;
		}
		phai--;
		for(int i=phai ; i>=trai;i--){
			a[duoi][i] =num;
			num--;
		}
		duoi--;
		for(int i=duoi ;i>=tren;i--){
			a[i][trai]=num;
			num--;
		}
		trai++;
	}
	printf("Test %d:\n",k);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		
	}

}
