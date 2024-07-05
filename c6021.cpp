#include<stdio.h>
#include<string.h>
#include<ctype.h>
int chan_le_dominate(char a[1005]){
	int le=0,chan=0;
	int checkchan=0;
	int checkle=0;
	for(int i=0;i<strlen(a);i++){
	
		if(!isdigit(a[i]) || a[0]=='0'){
			return -1;	
			break;		
		}
	}
	
	for(int i=0;i<strlen(a);i++){
		if((a[i]-'0')%2==0)
			chan++;
		else le++;
	}
	if(strlen(a)%2==0 && chan>le){
		checkchan=1;
	}
	if(strlen(a)%2!=0 && le>chan){
		checkle=1;
	}
	
	if(checkchan || checkle){
		return 1;
	}
	
		
	if(!checkchan && !checkle)
		return 2;
}


int main(){
	int test;scanf("%d",&test);
	getchar();
		while(test--){
			char a[1005];
			gets(a);
			
			if(chan_le_dominate(a)==1)
				printf("YES");
			else if(chan_le_dominate(a)==-1)
				printf("INVALID");
			else if(chan_le_dominate(a)==2)
				printf("NO");
				printf("\n");
	
	
	}		
}
