#include<stdio.h>
struct SinhVien{
	int ma;
	char name[50];
	char dob[20];
	float s1,s2,s3;
	float sum;
};
typedef struct SinhVien Sv;
void nhap(Sv *person){
	scanf("\n");
	gets(person->name);
	gets(person->dob);
	scanf("%f %f %f",&person->s1,&person->s2,&person->s3);
	person->sum = person->s1 + person->s2 + person->s3;
	
}
int main(){
	int n;scanf("%d",&n);
	Sv sv[n];
	for(int i=0;i<n;i++){
		nhap(&sv[i]);
		sv[i].ma = i+1;
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(sv[j].sum > sv[i].sum){
				Sv tmp=sv[j];
				sv[j] = sv[i];
				sv[i]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d %s %s %.1f\n",sv[i].ma,sv[i].name,sv[i].dob,sv[i].sum);
}
