#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dulieu{
	char data[50];
	int fre;
};
typedef struct dulieu dl;
dl a[1000];

int cmp(const void *a,const void *b){
	dl *x = (dl*)a;
	dl *y = (dl*)b;
	if(x->fre != y->fre){
		if(y->fre < x->fre)
		return -1;
		else
			return 1;
	}
	else{
		return strcmp(x->data,y->data);
	}
	
}
int main(){
	char s[105];
	int len = 0;
	while(gets(s) != NULL){
		char tk[1][50];
		char *token = strtok(s," ");
		while(token != NULL){
			strcpy(tk[0],token);
			token = strtok(NULL , " ");
			
		}
		int pos = -1;
		for(int i =0;i<len;i++){
			if(strcmp(tk[0],a[i].data)==0){
				pos = i;
			}
		}
		if(pos == -1){
			strcpy(a[len].data,tk[0]);
			a[len].fre = 1;
			++len;
		}
		else{
			a[pos].fre += 1;
		}
	}
	qsort(a,len,sizeof(a[0]),cmp);
	for(int i =0;i<len;i++){
		printf("%s %d\n",a[i].data,a[i].fre);
	}
	
}
