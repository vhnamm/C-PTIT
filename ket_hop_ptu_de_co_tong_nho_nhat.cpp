#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int cmp(const void*a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return(*x - *y);
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++) scanf("%d",&a[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	
long long sum1=0;
long long sum2=0;
for(int i =0;i<n;i++){
	if(i%2==0){
			sum1 = sum1 *10 +a[i];
		}
	else{
			sum2= sum2 *10 +a[i];
		}
	}
long long sum = sum1+sum2;
	printf("%lld",sum);
}
