#include<stdio.h>
#include<string.h>
void lwr(char s[], int len){
	for(int i=0;i<len ;i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		scanf("\n");
		char s[50];
		gets(s);
		lwr(s, strlen(s));
		char a[50][50];
		int len =0;
		char *token = strtok(s, " ");
		while(token != NULL){
			strcpy(a[len], token);
			++len;
			token = strtok(NULL," ");
		}
		for(int i=0;i<len; i++){
			a[i][0] -= 32;
		}
		for(int i=0;i<len;i++){
			printf("%s ",a[i]);
		}
	}
}
