#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void dao(int a[],int n){
	int l =0, r=n-1;
	while(l<r){
		int tmp = a[r];
		a[r] = a[l];
		a[l]=tmp;
		++l;--r;
	}
}
void add(char a[], char b[],int lena,int lenb){
	int x[lena]; int y[lena]; int sum[lena+1];//y co sochuso <x
	for(int i =0;i<lena;i++){
		x[i] = a[i]-'0';
	}
	int len =0;
	int len1 =0;
	for(int i =lenb;i<lena;i++){
		y[len++] = 0;
	}
	
	for(int i =0;i<lenb;i++){
		y[len++]=b[i]-'0';
		
	}
	dao(x,lena); dao(y,lena);
	
	int nho =0;
	int cntSum =0;
	for(int i = 0;i<lena;i++){
		sum[cntSum] = (x[i] + y[i] + nho) %10;
		nho = (x[i] + y[i] + nho)/10;
		cntSum++;
	}
	if(nho) sum[cntSum++] = nho;
	for(int i=cntSum-1;i>=0;i--){
		printf("%d",sum[i]);
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char a[505];
		char b[505];
		scanf("\n");
		gets(a);
		gets(b);
		if(strlen(a) >= strlen(b)) add(a,b,strlen(a),strlen(b));
		else add(b,a,strlen(b),strlen(a));
		printf("\n");
	}
}

