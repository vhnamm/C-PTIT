#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[1000];
	int res = -1;
	while(scanf("%s",s) != -1){
		if(strlen(s) > res){
			
			res = strlen(s);
		}
	}
	
	printf("%d",res);
}
