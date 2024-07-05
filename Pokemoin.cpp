#include<stdio.h>
struct pokemon{
	char name[50];
	int stoneNeeded;
	int stoneHad;
	int canUp;
};
typedef struct pokemon pok;
void nhap(pok *P){
	getchar();
	gets(P->name);
	scanf("%d %d", &P->stoneNeeded, &P->stoneHad);
	P->canUp = 0;
}

int main(){
	int n;scanf("%d",&n);
	pok P[n];
	for(int i=0;i<n;i++){
		nhap(&P[i]);
	}
	
	for(int i=0;i<n;i++){
		while(P[i].stoneHad>=P[i].stoneNeeded){
			P[i].stoneHad -= P[i].stoneNeeded;
			P[i].canUp++;
			P[i].stoneHad += 2;
		}
	}
	int cnt=0;
	int max=-1;
	int idx;
	for(int i=0;i<n;i++){
		cnt += P[i].canUp;
		if(P[i].canUp > max){
			max=P[i].canUp;
			idx=i;
		}
	}
	
	printf("%d\n",cnt);
	printf("%s",P[idx].name);
	
}
