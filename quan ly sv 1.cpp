#include<stdio.h>
struct sinhvien{
	int ma;
	char name[50];
	float a,b,c;
	float sum;
};
typedef struct sinhvien sv;
void add(sv Sv[], int n, int *Id){
	
	for(int i=0;i<n;i++){
		scanf("\n");
		gets(Sv[i].name);
		scanf("%f %f %f",&Sv[i].a, &Sv[i].b, &Sv[i].c);
		Sv[i].ma = *Id+1;
		Sv[i].sum = Sv[i].a + Sv[i].b + Sv[i].c;
		*Id += 1;
	}
}
void change(sv Sv[],int n){
	scanf("\n");
	gets(Sv[n-1].name);
	scanf("%f %f %f",&Sv[n-1].a, &Sv[n-1].b, &Sv[n-1].c);
	Sv[n-1].sum = Sv[n-1].a + Sv[n-1].b + Sv[n-1].c;

}

int main(){
	sv a[1000];
	int n;
	int ID=0;
	while(1){
		scanf("%d",&n);
		
		if(n==1){		
		int soSv; scanf("%d",&soSv);
		add(a, soSv,&ID);
		printf("%d\n",soSv);			
		}
		
		if(n==2){
			int macanFix; scanf("%d",&macanFix);
			change(a,macanFix);
			printf("%d\n",macanFix);
		}
		
		if(n==3){
			for(int i=0;i<ID-1;i++){
				for(int j=i+1;j<ID;j++){
					if(a[j].sum < a[i].sum){
						sv tmp=a[j];
						a[j]=a[i];
						a[i]=tmp;
					}
				}
			}
			for(int i=0;i<ID;i++){
				printf("%d %s %.1f %.1f %.1f\n",a[i].ma,a[i].name,a[i].a,a[i].b,a[i].c);
			}
			break;
		}
		
	}
}
