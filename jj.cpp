#include<stdio.h>
#include<string.h>
int a[1000][1000];
int InMatrix(int i , int j,int n, int m){
	if(i>=0 && i<n && j>=0 && j<m)
		return 1;
	return 0;
}
int checkcd(int i,int j,int n,int m){
	int c1 =1, c2=1 , c3=1 , c4=1,c5=1,c6 =1,c7=1,c8=1;
	if(InMatrix(i-1,j-1,n,m) && a[i-1][j-1] >= a[i][j]) c1=0;
	if(InMatrix(i-1,j,n,m) && a[i-1][j] >= a[i][j]) c2=0;
	if(InMatrix(i-1,j+1,n,m) && a[i-1][j+1] >= a[i][j]) c3=0;
	if(InMatrix(i,j-1,n,m) && a[i][j-1] >= a[i][j]) c4 =0;
	if(InMatrix(i,j+1,n,m) && a[i][j+1] >= a[i][j]) c5=0;
	if(InMatrix(i+1,j-1,n,m) && a[i+1][j-1] >= a[i][j]) c6=0;
	if(InMatrix(i+1,j,n,m) && a[i+1][j] >= a[i][j]) c7=0;
	if(InMatrix(i+1,j+1,n,m) && a[i+1][j+1] >= a[i][j]) c8=0;
	
	if(c1 == 0 || c2 == 0 || c3 == 0 || c4 == 0 || c5 == 0 || c6 == 0 || c7 == 0 || c8 == 0 )
		return 0;
	return 1;
}

int main(){
	int n,m;scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int cnt = 0;
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			if(checkcd(i,j,n,m))
				++cnt;
		}
	}
	printf("%d",cnt);
}
