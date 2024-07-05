#include<stdio.h>
#include<string.h>
void lwr(char a[]){
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
	}
}
int main(){
	int t;scanf("%d",&t);

	for(int i=1;i<=t;i++){
		scanf("\n");
		char a[205];
		char b[25];
		
		gets(a);
		scanf("%s",b);
		lwr(b);
		int length=0;
		char c[205];
		strcpy(c,a);
		char dest[50][205];
	
		
		char *token=strtok(a," ");
		while(token!=NULL){
			strcpy(dest[length++],token);
			token=strtok(NULL," ");
		}
		
		lwr(c);
	
		int len=0;
		printf("Test %d: ",i);
		char *token1=strtok(c," ");
		while(token1!=NULL){
			if(strcmp(token1,b)!=0){
				printf("%s ",dest[len]);
				++len;
			}
			else
				++len;
	
				
			token1=strtok(NULL," ");
		}
		printf("\n");
	}
}

