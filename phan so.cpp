#include<stdio.h>
struct phanSo{
	int tu,mau;
};
typedef struct phanSo ps;

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

void rutgon(ps *a){
	for(int i=2;i<=9;i++){
		while(a->tu%i==0 && a->mau%i==0){
			a->tu/=i;
			a->mau/=i;
		}
	}
}
int main(){
	int t;scanf("%d",&t);
	for(int j=1;j<=t;j++){
			
		ps p,q;
		scanf("%d %d %d %d",&p.tu,&p.mau,&q.tu,&q.mau);
		
		rutgon(&p);
		rutgon(&q);
		
		int lcm=(p.mau * q.mau)/gcd(p.mau,q.mau);
		printf("Case #%d:\n",j);
	
		printf("%d/%d %d/%d\n",p.tu*(lcm/p.mau), lcm,q.tu*(lcm/q.mau),lcm);
	
	// y' b:	
		ps tong;
		
		tong.tu=p.tu*(lcm/p.mau)+q.tu*(lcm/q.mau);
		tong.mau=lcm;
		rutgon(&tong);
		printf("%d/%d\n",tong.tu,tong.mau);
		
	// y' c:
		ps thuong;
		thuong.tu = p.tu * q.mau;
		thuong.mau = p.mau * q.tu;
		rutgon(&thuong);
		printf("%d/%d",thuong.tu,thuong.mau);
		printf("\n");
	}
}

