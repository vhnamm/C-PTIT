#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
			break;
		}
	}
	return 1;
}

int legendry(int n,int p){
	int mumax = 0;
	for(int i = p;i<=n;i*=p){
		mumax += n/i;
	}
	int sum = 1;
	for(int i =1;i<=mumax;i++){
		sum *= p;
	}
	return sum;
}

int main(){
	int a,b;scanf("%d%d",&a,&b);
	int m;
	if(a>b) m = b;
	else m =a;
	long long giaithua = 1;
	for(int i = 2;i<=m;i++){
		if(nt(i))
		giaithua *= legendry(m,i) ;
	}
	printf("%lld",giaithua);
}
