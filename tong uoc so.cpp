#include<stdio.h>
#include<math.h>
int mark[100005];
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i =0;i<100005;i++) mark[i]=0;
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
		mark[a[i]]++;
	}
	for(int i =0;i<n;i++){
		if(mark[a[i]] > 1){
			printf("%d ",a[i]);
			mark[a[i]] = 0;
		}
	}
}
