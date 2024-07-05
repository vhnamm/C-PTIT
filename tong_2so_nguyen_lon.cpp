#include <stdio.h>
#include <string.h>
void add(char a[505], char b[505]){
	int lenA= strlen(a);
	int lenB=strlen(b);
	
	int x[lenA],y[lenA];
	int sum[lenA+1];
	
	int cntX=0,cntY=0;
	for(int i=lenA-1;i>=0;i--){
		x[cntX++]=a[i]-'0';		
	}
	for(int i=lenB-1;i>=0;i--){
		y[cntY++]=b[i]-'0';
	}
	for(int i=lenB;i<lenA;i++){
		y[i]=0;
	}
	//--ready to Sum---
	
	int nho=0;
	int cntS=0;
	for(int i=0;i<lenA;i++){
		sum[cntS]=(x[i]+y[i]+nho)%10;
		nho=(x[i]+y[i]+nho)/10;
		cntS++;
		
	}
	if(nho){
		sum[cntS++]=nho;
	}
	for(int i=cntS-1;i>=0;i--){
		printf("%d",sum[i]);
	}
}
int main(){
	int test;scanf("%d",&test);

	while(test--){
		scanf("\n");
		char a[505];
		char b[505];
		gets(a);
		gets(b);
		if(strlen(a)>=strlen(b))
			add(a,b);
		else
			add(b,a);
		
		printf("\n");
	}
}
