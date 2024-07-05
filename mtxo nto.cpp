#include<stdio.h>
#include<string.h>
void sort(char a[], int b[], int m){
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(b[j]<b[i]){
				int tmp=b[j];
				b[j]=b[i];
				b[i]=tmp;
				
				char tmp2=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
void solve(char a[], int b[], int m){
	sort(a,b,m);
	int c[m-1];
	c[0]=b[0]+b[1];
	int len=2;
	
	for(int i=1;i<m-1;i++){
		c[i]=b[len++];
	}
	for(int i=0;i<m;i++){
		
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int m; scanf("%d",&m);
		char a[m];
		int b[m]
		for(int i=0;i<m;i++) scanf("%c",&a[i]);
		for(int i=0;i<m;i++) scanf("%d",&b[i]);
		
		solve(a,b,m)
	}
}
