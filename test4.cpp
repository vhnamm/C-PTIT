#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void lwr(char s[],int n){
	for(int i =0;i<n;i++){
		if(s[i] >= 'A' && s[i]<='Z'){
			s[i] += 32;
		}
	}
}
int main(){
	int n;scanf("%d",&n);
	char a[50][100];
	while(n--){
		scanf("\n");
		char s[100];
		gets(s);
		lwr(s,strlen(s));
		int len =0;
		char *token = strtok(s," ");
		while(token != NULL){
			strcpy(a[len],token);
			++len;
			token = strtok(NULL," ");
		}
		printf("%s",a[len-1]);
		for(int i =0;i<len-1;i++){
			printf("%s",a[i]);
		}
		printf("@28tech.com.vn\n");
		
	}
	
}
