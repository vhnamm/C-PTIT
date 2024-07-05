#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	char s[50];
	scanf("%s",s);
	int L[strlen(s)];
	for(int i =0;i<strlen(s);i++) L[i] = 1;
	
	for(int i =0 ;i<strlen(s);i++){
		for(int j =0;j<i;j++){
			if(s[i] > s[j]){
				L[i] = max(L[i] , L[j]+1);
			}
		}
	}
	int res = -1;
	for(int i =0;i<strlen(s);i++){
		if(L[i] > res)
			res = L[i];
	}
	printf("%d",26-res);
}
