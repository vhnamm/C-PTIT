#include<stdio.h>
struct sv{
	int ma;
	char name[25];
	float a,b,c;
	float sum;
};
typedef struct sv sv;



void nhap(sv SV[], int n, int *stt ){
	
	for(int i=0;i<n;i++){
		scanf("\n");
		gets(SV[i].name);
		scanf("%f %f %f",&SV[i].a,&SV[i].b,&SV[i].c);
		SV[i].sum= SV[i].a + SV[i].b + SV[i].c;
		SV[i].ma = *stt; // 28tech phan contro (*stt) la gia tri cua con tro tro toi con (stt) la gia tri cua con tro hay dia chi
		*stt+=1;
	}
}
void change(sv SV[], int ma){
	scanf("\n");
	gets(SV[ma-1].name);
	scanf("%f %f %f",&SV[ma-1].a,&SV[ma-1].b,&SV[ma-1].c);
}
int id=1;
int main(){
	int n;
	while(1){
	scanf("%d",&n);
		sv a[1000];
		if(n==1){
			
			int sosvthemmoi;
			scanf("%d",&sosvthemmoi);
			nhap(a,sosvthemmoi , &id);
			printf("%d",sosvthemmoi);
			printf("\n");
		}
		else if(n==2){
			int svsuadoi;
			scanf("%d",&svsuadoi);
			change(a,svsuadoi);
			printf("%d",svsuadoi);
			printf("\n");
		}
		else if(n==3){
			for(int i=0; i< id; i++){
				int check=0;
				if(a[i].a < a[i].b && a[i].b <a[i].c)
					check=1;
				if(check){
						printf("%d %s %.1f %.1f %.1f",a[i].ma,a[i].name,a[i].a,a[i].b, a[i].c);
					printf("\n");
				}
				
			}
			
			
			
			
			break;
		}
	}	
}
