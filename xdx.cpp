#include<stdio.h>
#include<string.h>
void poly(char a[25]){
	int l=0,r=strlen(a)-1;
	int cnt=0;
	while(l<=r){
		if(l==r && cnt==0)
			cnt=1;
		if(a[l]!=a[r]){
			cnt++;
		}
		++l;--r;
	}
	if(cnt==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
		printf("\n");
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){		
		char a[25];
		gets(a);
		poly(a);		
	}
	
}

