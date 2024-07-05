#include <stdio.h>
int main(){
int t;scanf("%d",&t);
while(t--){
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	long long sum=0;
	long long res=-1e18;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<0)
			sum=0;
		if(sum>res)
			res=sum;
	}
	printf("%lld\n",res);
	
}
	
}
