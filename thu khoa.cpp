#include<stdio.h>
struct sinhvien{
	int ID;
	char name[50];
	char dob[20];
	float sub1,sub2,sub3;
	float sum;
};
typedef struct sinhvien Sv;
void nhap(Sv *person){
	scanf("\n");
	gets(person->name);
	gets(person->dob);
	scanf("%f %f %f",&person->sub1,&person->sub2,&person->sub3);
	person->sum = person->sub1 + person->sub2 +person->sub3;
}
int main(){
	int n;scanf("%d",&n);
	Sv sv[n];
	for(int i=0;i<n;i++){
		nhap(&sv[i]);
		sv[i].ID = i+1;
	}
	float max=-1;
	for(int i=0;i<n;i++){
		if(sv[i].sum > max){
			max=sv[i].sum;
		}
	}
	for(int i=0;i<n;i++){
		if(sv[i].sum == max){
			printf("%d %s %s %.1f\n",sv[i].ID, sv[i].name,sv[i].dob,sv[i].sum);
		}
	}
}
