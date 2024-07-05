#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
	ll min1=10e9;
	ll min2=10e9;
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];	
				
		}	
		if(a[i]<min2 && a[i]>min1){
			min2=a[i];
		}
	}

	printf("%lld %lld",min1,min2);
}

