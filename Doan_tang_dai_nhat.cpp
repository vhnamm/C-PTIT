#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		int L[n];
		for(int i=0;i<n;i++){
			L[i]=1;
		}
		
		long long res=-10e9;
	
		for(int i=0;i<n-1;i++){
			if(a[i]<a[i+1]){
				L[i+1]+=L[i];
			}			
		}
		
		for(int i=0;i<n;i++){
			if(L[i]>res) res=L[i];
		}
		printf("Test %d:\n",k);
		printf("%d\n",res);
		for(int i=0;i<n;i++){
			if(L[i]==res){
				for(int j=i-res+1;j<=i;j++){
					printf("%d ",a[j]);
				}
				printf("\n");
			}
		}
	}
}
