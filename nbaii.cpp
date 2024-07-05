

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
struct hs{
	char name[50];
	int ma;
	float toan, tv, nn, vl, hh, sh, ls, dl, cd, cn;
	float  average;
	char hocluc[15];
};
typedef struct hs hs;

int cmp(const void *a, const void *b){
	hs *x = (hs*)a;
	hs *y = (hs*)b;
	if(x->average != y->average){
		if(x->average < y->average) return 1;
		else return -1;
		
	}
	
	
	else {
		if(x->ma < y->ma) return -1;
		else return 1;
	}
}
int main(){
	int n;scanf("%d",&n);
	hs a[n];
	for(int i=0 ; i<n ;i++){
		scanf("\n");
		gets(a[i].name);
		scanf("%f %f %f %f %f %f %f %f %f %f",&a[i].toan, &a[i].tv,&a[i].nn,&a[i].vl,&a[i].hh,&a[i].sh,&a[i].ls,&a[i].dl,&a[i].cd,&a[i].cn);
		a[i].average = (a[i].toan + a[i].tv + a[i].nn +a[i].vl + a[i].hh + a[i].sh + a[i].ls + a[i].dl + a[i].cd + a[i].cn)/10;
		a[i].ma = i+1;
		if(a[i].average < 5) strcpy(a[i].hocluc,"YEU");
		else if(a[i].average >= 5 && a[i].average <7) strcpy(a[i].hocluc,"TB");
		else if(a[i].average >= 7 && a[i].average <8) strcpy(a[i].hocluc,"KHA");
		else if(a[i].average >= 8 && a[i].average <9) strcpy(a[i].hocluc,"GIOI");
		else  strcpy(a[i].hocluc,"XUAT SAC");
		
		
		
	}
	qsort(a,n,sizeof(hs),cmp);
	for(int i=0;i<n;i++){
		if(a[i].ma<=10){
			printf("HS0%d %s %.1f %s\n",a[i].ma, a[i].name, a[i].average, a[i].hocluc);
			
		}
		else printf("HS%d %s %.1f %s\n",a[i].ma, a[i].name, a[i].average, a[i].hocluc);
	}
}
