#include <stdio.h>
#include <math.h>
#define ll long long


int main(){
	int t;scanf("%d",&t);
	while(t--){
	
		int n;scanf("%d",&n);
		int a[n];
	
		for(int i=0;i<n ;i++){
			scanf("%d",&a[i]);
		}
		long long max=-10e9;
		for(int i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
				
			}
		}
	printf("%d\n",max);
	for(int i=0;i<n;i++){
		if(a[i]==max){
			printf("%d ",i);
		}
	}
		printf("\n");
	}
	
}
