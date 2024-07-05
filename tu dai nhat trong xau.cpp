#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct tu{
	char data[50];
	int fre;
};
typedef struct tu tu;
tu a[1000];
int main(){
	char s[100];
	int res = -1;
	int ptu=0;
	while(scanf("%s",s) != -1){
	
		int len = strlen(s);
		if(len > res){
			
			res = len;
		}
	
	int pos = -1;
	for(int i =0;i<ptu;i++){
		if(strcmp(s,a[i].data) == 0){
			pos = i;
		}
	}
	if(pos == -1){
		strcpy(a[ptu].data,s);
		
		a[ptu].fre = 1;
		ptu++;
	}
	else{
		a[pos].fre += 1;
	}
	}
	for(int i =0;i<ptu;i++){
		if(strlen(a[i].data) == res){
			printf("%s %d %d\n",a[i].data,res,a[i].fre);
		}
	}
}
