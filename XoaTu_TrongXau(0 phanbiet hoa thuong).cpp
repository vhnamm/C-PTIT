#include<stdio.h>
#include<string.h>
/* ko pbiet Hoa thuong nen k the cho tat ca mang ve thuong hopac HOA de in*/
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
		strcpy(c,a);// phai khoi tao mang y het vi strtok da tach het mang a nhu o duoi
		char dest[50][205];
	
		
		char *token=strtok(a," ");
		while(token!=NULL){
			strcpy(dest[length++],token);
			token=strtok(NULL," ");
		}
		// ----den day mang a chi con lai token dau tien----
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

