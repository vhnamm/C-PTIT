#include<stdio.h>
int main(){
	// khoi tao mang do dai doan duong
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	
	// khoi tao so' den\ hoat dong,tam\ chieu sang, vi tri dat den
	int m;scanf("%d",&m);
	int k;scanf("%d",&k);
	int b[m];
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		int check =0;
		for(int j=0;j<m;j++){
			if(a[i]>=b[j]-k && a[i]<=b[j]+k){
				check =1;
			}
		}
		if(!check){
			++cnt;
			if(a[i+1]+k>=a[n-1])
				break;
			else
				i+=2*k;
		}
		
	}
	printf("%d",cnt);
}
