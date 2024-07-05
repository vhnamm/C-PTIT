#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int cmp(const void *a, const void *b){
	char *x = (char*)a;
	char *y = (char*)b;
	
	if(strlen(x) != strlen(y)){
		return strlen(x) - strlen(y);
	}
	else return strcmp(x,y);
	
}
int main(){
	char s[10005];
	gets(s);
	char a[10005][50];
	int len =0;
	char *token=strtok(s," ");
	while(token != NULL){
		strcpy(a[len],token);
		len++;
		token = strtok(NULL, " ");
	}
	qsort(a,len,sizeof(a[0]),cmp);
	for(int i=0;i<len;i++){
		printf("%s ",a[i]);
	}
}
