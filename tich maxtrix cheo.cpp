#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	for(int l=1;l<=t;l++){
		int n;scanf("%d",&n);
		
		int a[n][n];
		for(int i=0;i<n;i++){
			int num=1;
			for(int j=0; j<n;j++){
				if(j<=i){
					a[i][j] = num;
					num++;
				}
				else 
					a[i][j] = 0;
			}
		}
		
		int b[n][n];
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				b[i][j] = a[j][i];
			}		
		}
		
		int kq[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int sum=0;
				for(int k=0;k<n;k++){
					sum+= a[i][k] * b[k][j];
				}
				kq[i][j] = sum;
			}
		}
		
		printf("Test %d:\n",l);
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%d ",kq[i][j]);
			}
			printf("\n");
		}
	}
}
