#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
char s[105];
gets(s);
char fre[50][105];
int j=0;
char *token=strtok(s," ");
	while(token!=NULL){
		int check=1;
		for(int i=0;i<50;i++){
			if(strcmp(token,fre[i])==0){
				check=0;
			}
		}	
		
		if(check){
			strcpy(fre[j],token);
			++j;
		}
		token=strtok(NULL," ");
	}
	for(int i=0;i<j;i++){
		printf("%s ",fre[i]);
	}
}


