#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct name{
	char ten[100];
	int fre;
	int check;
};
typedef struct name name;

int cmp(const void *a, const void *b){
	name *x= (name*)a;
	name *y= (name*)b;
	
	return strcmp(x->ten ,y->ten);
}
int main(){
	name a[1005];
	char s[100];
	int len=0;
	while(gets(s) != NULL){
		strcpy(a[len].ten,s);
		a[len].fre = 1;
		a[len].check=1;
		++len;
	}
	for(int i=0 ; i<len ;i++){
		if(a[i].check != 0){
			for(int j=i+1;j<len;j++){
				if(strcmp(a[j].ten , a[i].ten)==0){
					a[i].fre++;
					a[j].check=0;
				}
			}
		}
	}
	qsort(a,len,sizeof(name),cmp);
	
	for(int i=0 ; i<len ; i++){
		if(a[i].check != 0){
			printf("%s %d\n",a[i].ten,a[i].fre);
		}
	}
}
