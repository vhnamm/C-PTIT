#include<stdio.h>
#include<string.h>
#include<ctype.h>
void lwr(char s[],int n){
	for(int i=0;i<n;i++){
		if(s[i]>='A' && s[i]<='Z')
			s[i] += 32;
	}
}
int main(){
	char s[100005];
	char t[100005];
	gets(s);
	gets(t);
	lwr(s,strlen(s)) ; lwr(t,strlen(t));
	
	char a[1000][100], b[1000][100];
	int lena =0,lenb=0;
	char *token = strtok(s," ");
	while(token != NULL){
		strcpy(a[lena++],token);
		token = strtok(NULL, " ");
	}
	
	token = strtok(t," ");
	while(token != NULL){
		strcpy(b[lenb++],token);
		token = strtok(NULL," ");
	}
	int mark[lena];
	for(int i =0;i<lena;i++) mark[i] = 1;
	
	int flag = 0;
	
	for(int i = 0; i < lena;i++){
		if(mark[i] == 1){
			for(int j=i+1;j<lena;j++){
				if(strcmp(a[i],a[j])==0)
					mark[j] = 0;
			}
			for(int j = 0;j<lenb;j++){
				if(strcmp(a[i],b[j]) == 0){
					printf("%s ",a[i]);
					
					flag = 1;
					break;
				}
			}
		}
		
	}
	
	if(!flag) printf("NOT FOUND");
}
