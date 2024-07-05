#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n; scanf("%d",&n);
int a[n][2];
for(int i=0;i<n;i++){
	for(int j=0;j<2;j++){
		scanf("%d",&a[i][j]);
	}
}
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[j][0]<a[i][0]){
			int tmp1=a[j][0];
			a[j][0]=a[i][0];
			a[i][0]=tmp1;
			
			int tmp2=a[j][1];
			a[j][1]=a[i][1];
			a[i][1]=tmp2;
		}
	}
}
long long t=0;
for(int i=0;i<n;i++){
		if(t<=a[i][0]){
			t=a[i][0];			
	}
		t+=a[i][1];				
}
printf("%lld",t);
}
