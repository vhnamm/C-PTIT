#include<stdio.h>
struct time{
	int h,m,s;
	long total;
};
typedef struct time time;
int main(){
	int n;scanf("%d",&n);
	time a[n];
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&a[i].h, &a[i].m,&a[i].s);
	}
	for(int i=0;i<n;i++){
		a[i].total = a[i].h*3600 + a[i].m*60 +a[i].s;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j].total <= a[i].total){
				time tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d %d %d",a[i].h,a[i].m,a[i].s);
		printf("\n");
	}
}

