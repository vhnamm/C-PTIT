#include<stdio.h>
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int b[n],k=0;
		
		for(int i=0;i<n;i++){
			int ok=1;
			for(int j=i+1;j<n;j++){
				if(a[j]>=a[i]){
					ok=0;
				}
			}
			if(ok || i==n-1){
				b[k++]=a[i];
			}
		}
		sort(b,k);
		for(int i=0;i<k;i++){
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}
