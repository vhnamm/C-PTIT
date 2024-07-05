#include <stdio.h>
void sort(int a[],int b[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[j]>b[i]){
				int tmp=b[j];
				b[j]=b[i];
				b[i]=tmp;
			}
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int n;scanf("%d",&n);
		int a[n], b[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++){
			scanf("%d",&b[i]);
		}
		
		sort(a,b,n);
		int c[2*n+5];
		int len=0;
		for(int i=0;i<n;i++){
			c[len++]=a[i];
			c[len++]=b[i];
		}
		printf("Test %d:\n",j);
		for(int i=0;i<len;i++){
			printf("%d ",c[i]);
		}
		printf("\n");
	}	
}
