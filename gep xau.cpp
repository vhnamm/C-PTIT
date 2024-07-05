#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp (const void *a, const void *b){
	char x[100],y[100],z[100],t[100];
	strcpy(x,(char*)a) ; strcpy(y,x);
	strcpy(z,(char*)b) ; strcpy(t,z);
	
	strcat(x,z); //tao thanh xau ab;
	strcat(t,y);// tao thanh xâu ba;
	
	return strcmp(x,t); // so sánh xem ptu nào nên dung trc
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int soxau;scanf("%d",&soxau);
		char a[20][20];
		int len = 0;
		char s[15];
		for(int i =0;i<soxau;i++){
			scanf("%s",s);
			strcpy(a[len],s);
			++len;
		}
		
		qsort(a,len,sizeof(a[0]),cmp);
		for(int i = 0;i<len;i++){
			printf("%s",a[i]);
		}
		printf("\n");
	}
	
}
