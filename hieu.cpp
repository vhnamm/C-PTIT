#include<stdio.h>
#include<string.h>
void minus_bignum(char a[1005],char b[1005]){
	int lenA=strlen(a);
	int x[lenA];
	int y[lenA];
	int sum[lenA];
	
	int cntX=0, cntY=0;
	for(int i=strlen(a)-1;i>=0;i--){
		x[cntX++]=a[i]-'0';
	}
	for(int i=strlen(b)-1;i>=0;i--){
		y[cntY++]=b[i]-'0';
	}
	for(int i=strlen(b);i<strlen(a);i++){
		y[i]=0;
	}
		int nho=0;
		int cntS=0;
	for(int i=0;i<strlen(a);i++){
		if(x[i]-y[i]-nho<0){
			sum[cntS++]=x[i]+10-y[i]-nho;
			nho=(x[i]+10)/10;
		}
		else{
			sum[cntS++]=x[i]-y[i]-nho;
			nho=x[i]/10;
		}
	}
	while(sum[cntS-1]==0){
		--cntS;
	}
	
			for(int i=cntS-1;i>=0;i--){
		printf("%d",sum[i]);
	}
	
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		scanf("\n");
		char a[1005];
		char b[1005];
		gets(a);
		gets(b);
		if(strlen(a)==strlen(b)){
			if(strcmp(a,b)==1)
				minus_bignum(a,b);
			else if(strcmp(a,b)==0)
				printf("0");
			else
				minus_bignum(b,a);
			
		}
		else if(strlen(a)>strlen(b)){
			minus_bignum(a,b);
		}
			
		else 
			minus_bignum(b,a);
		printf("\n");
	}
}
