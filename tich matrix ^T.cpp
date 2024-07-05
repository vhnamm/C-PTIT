#include<stdio.h>
int main(){
	int t;scanf("%d",&t);
	for(int l=1;l<=t;l++){
		int m,n;scanf("%d %d",&m,&n);
		int p=m;
		int a[m][n];
		
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		int b[n][p];
		for(int i=0;i<n;i++){
			for(int j=0;j<p;j++){
				b[i][j] = a[j][i];
			}
		}
		
		int kq[m][p];
		for(int i=0;i<m;i++){
			for(int j=0;j<p;j++){
				int sum=0;
				for(int k=0;k<n;k++){
					sum+= a[i][k] * b[k][j];
				}
				kq[i][j] =sum;
			}
		}
		printf("Test %d:\n",l);
		for(int i=0;i<m;i++){
			for(int j=0;j<p;j++){
				printf("%d ",kq[i][j]);
			}
			printf("\n");
		}
	}
}
