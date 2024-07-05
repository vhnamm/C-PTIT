#include<stdio.h>
#include<string.h>
#include<math.h>
void catdoi(char a[20]){
	for(int i=0;i<strlen(a);i++){
		if( a[i]=='8' || a[i]=='9'){
			a[i]='0';
		}
	}
	
}
int main(){
	int test;scanf("%d",&test);
	getchar();
	while(test--){
		char a[20];
		gets(a);	
		catdoi(a);
		int dem=0,check=1;;
			for(int i=0;i<strlen(a);i++){
				if(a[i]!='0')
				dem++;
			}
		for(int i=0;i<strlen(a);i++){
			
			if(a[i]!='1' && a[i]!='0' || !dem){
				check=0;
			}
		
		}
		if(check){
			int j=0;
			for(int i=0;i<strlen(a);i++){
				if(a[i]!='0'){
					break;
				}
				++j;
			}
			for(int i=j;i<strlen(a);i++){
				printf("%c",a[i]);
			}
		}
		else printf("INVALID");
		printf("\n");
	}


	
}

