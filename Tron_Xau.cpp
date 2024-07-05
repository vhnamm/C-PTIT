#include<stdio.h>
#include<string.h>

void tron(char s1[], char s2[],char s12[], int n){
	int l=0;
		for(int i=0;i<n;i++){
		s12[l++]=s2[i];
		s12[l++]=s1[i];
	}
	s12[l]='\0';
	
}
void tach(char s1[], char s2[],char s12[], int n){
	int j=0;
	for(int i=0;i<n;i++){
		s1[i]=s12[j++];
	}
	for(int i=0;i<n;i++){
		s2[i]=s12[j++];
	}
	
}
int solve(int n){
	int cnt=0;
	char s1[n], s2[n];
	char s[2*n + 5];
	scanf("%s%s%s",s1,s2,s);
	
	char t1[n], t2[n];
	char s12[2*n +5];
	
	strcpy(t1,s1); strcpy(t2,s2);
	while(1){
		++cnt;
		tron(s1,s2,s12,n);
		if(strcmp(s12,s)==0){
			return cnt;
			
		}
		tach(s1,s2,s12,n);
		if(!strcmp(t1,s1) && !strcmp(t2,s2)){
			
			break;
		}
		
	}
return -1;
}

int main(){

	
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0){
			break;
		}
		
		printf("%d\n",solve(n));
	}	
}
