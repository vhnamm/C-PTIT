#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char ban[100][25];
char input[1000][1000];

void lwr(char s[], int len){
	for(int i=0; i<len; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
}

int main(){
	char banword[100];
	gets(banword);
	int len=0;
	char *token = strtok(banword, ",");
	
	while(token != NULL){
		strcpy(ban[len], token);
		++len;
		token = strtok(NULL,",");
		
	}
	
	char s[1000];
	int lenInput = 0;
	while(gets(s) != NULL){
		lwr(s,strlen(s));
		strcpy(input[lenInput] , s);
		++lenInput;		
	}
	
	for(int i = 0; i<lenInput;i++){
		int check = 1;
		for(int j=0;j<len;j++){
			if(strstr(input[i],ban[j])){
				check =0 ;
			}
		}
		if(check)
			printf("accept\n");
		else 
			printf("block\n");
	}
}
