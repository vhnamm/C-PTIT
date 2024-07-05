#include<stdio.h>
int a[1000][1000], b[1000][1000], c[1000][1000];
void nhap_mang(int a[][1000], int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int main(){
	int m,n,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	
		
	nhap_mang(a,m,n);
	nhap_mang(b,n,p);
	nhap_mang(c,p,q);
	
// buoc 1: tinh' kq1[m][p] = a[m][n] * b[n][p]......

	int kq1[m][p];
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			int sum=0;
			for(int k=0;k<n;k++){
				sum+=a[i][k]*b[k][j];
				
			}
			kq1[i][j]=sum;
		}
	}
	
// buoc 2: tinh' kq[m][q]= kq1[m][p] * c[p][q]....
	
	int kq[m][q];
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			int sum=0;
			for(int k=0;k<p;k++){
				sum+=kq1[i][k]*c[k][j];
				
			}
			kq[i][j]=sum;
		}
	} 
	
	for(int i=0;i<m;i++){
		for(int j=0;j<q;j++){
			printf("%d ",kq[i][j]);
		}
		printf("\n");
	}
}
