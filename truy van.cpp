#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
long long tribo[50];
void nhap(){
	tribo[0] = 0;
	tribo[1] = 1;
	tribo[2] = 1;
	for(int i=3; i<50;i++){
		tribo[i] = tribo[i-1] + tribo[i-2] + tribo[i-3];
		
	}
}
int nt(int n){
	for(int i= 2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return n>1;
}
int check(int n){
	int m =n,check1=0,check2=0;
	int sum =0;
	while(m){
		sum+=m%10;
		m/=10;
	}
	for(int i=0;i<50;i++){
		if(sum == tribo[i]){
			check1 = 1;
			break;
		}
	}
	if(nt(n)) check2 = 1;
	
	if(check1 && check2)
		return 1;
	return 0;
}
int main(){
	nhap();
	int a,b;scanf("%d %d",&a,&b);
	if(a>b){
		int tmp =a;
		a=b;
		b=tmp;
	}
	int checkkq =0;
	for(int i =a;i<=b;i++){
		if(check(i)){
			printf("%d ",i);
			checkkq =1;
		}
	}
	if(!checkkq) printf("28tech");
}
