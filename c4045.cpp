#include<stdio.h>
int check(int a[], int n){
	int c=0,l=0;
	for(int i=0;i<n;i++ ){
		if(a[i]%2==0)
			c++;
		else
			l++;
	}
	if((n%2==0 && c>l) || (n%2!=0 && l>c))
		return 1;
	else
		return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a[205];
		int n=0;
	
		while(scanf("%d",&a[n++])!=-1){
			char c=getchar();
			if(c=='\n')
				break;
		}
		
		if(check(a,n))
			printf("YES\n");
		else printf("NO\n");
	}
	
}
