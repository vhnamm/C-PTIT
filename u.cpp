#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int semi_poly(char a[20]){
	int check1=0,check2=1;
	if(a[0]-'0'==(a[strlen(a)-1]-'0')*2 ||(a[0]-'0')*2==(a[strlen(a)-1]-'0') )
		check1=1;
	int l=a[1], r=a[strlen(a)-2];
	while(l<r){
		if(a[l]!=a[r]){
			check2=0;
			break;
		}
		++l;--r;
	}	
	if(check1 && check2){
		return 1;
	}
	return 0;
}

int main(){
int t;scanf("%d",&t);
getchar();
while(t--){
	char a[20];
	gets(a);
	if(semi_poly(a)){
		printf("YES");
	}
	else 
		printf("NO");
		
	printf("\n");
}
	
}
