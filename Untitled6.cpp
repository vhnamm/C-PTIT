#include<stdio.h>
#include<math.h>

int nt(int n){
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
	int t;scanf("%d",&t);
	for(int k=1;k<=t;k++){
		
		
	int n;scanf("%d",&n);
	int a[n][n];
	int nto[405];
		int len=0;
		for(int i=0;i<5000;i++){
			if(nt(i)){
				nto[len]=i;
				printf("%d ",nto[len]);
				len++;
			}
		}
	
	int tren=0, duoi=n-1, trai=0, phai=n-1;
	int leng=0;
	while(leng<n*n){
		for(int i= trai; i<=phai; i++){
			a[tren][i]=nto[leng];
			leng++;
		}
		tren++;
		for(int i=tren; i<= duoi;i++){
			a[i][phai] = nto[leng];
			leng++;
		}
		phai--;
		for(int i=phai ; i>=trai;i--){
			a[duoi][i] =nto[leng];
			leng++;
		}
		duoi--;
		for(int i=duoi ;i>=tren;i--){
			a[i][trai]=nto[leng];
			leng++;
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
