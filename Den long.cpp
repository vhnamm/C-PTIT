#include<stdio.h>
#include<stdlib.h>
/* 
	con duong bdau tu 0
	cac diem a[i] la vi tri cua den, d la ban kinh nho nhat de chieu sang toan bo
	cach lam: sxep cac vi tri den tang dan;
			+) kcach giua 2 den la 2*d vi 2 den deu chieu sang 1 khoang d
			
*/
int cmp(const void *a,const void *b){
	int *x=(int*)a;
	int *y=(int*)b;
	return(*x - *y);
}
int main(){
	int soden, EndPoint;
	scanf("%d%d",&soden,&EndPoint);
	int a[soden];
	for(int i =0;i<soden;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,soden,sizeof(a[0]),cmp);
	double res = (double) (a[0]-0);
	double d_giua_den_cuoi_voiEndpoint = (double) (EndPoint-a[soden-1]);
	
	for(int i =1;i<soden;i++){
		double d = (double) (a[i]-a[i-1])/2;
		
		if(d > res){
			res = d;
		}
	}
	if(res < d_giua_den_cuoi_voiEndpoint)
		res = d_giua_den_cuoi_voiEndpoint;
		
	printf("%.10lf",res);
	
}
