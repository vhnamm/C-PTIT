#include<stdio.h>
struct appliances{
	
	char name[100];
	char clas[50];
	float import;
	float price;
	float stonk;
	int stt;
};
typedef struct appliances app;
void nhap( app *mathang){
	getchar();
	gets(mathang->name);
	gets(mathang->clas);
	scanf("%f %f",&mathang->import, &mathang->price);
	mathang->stonk=mathang->price-mathang->import;
}
int main(){
	int n;scanf("%d",&n);
	app hang[n];
	for(int i=0;i<n;i++){
		nhap(&hang[i]);
		hang[i].stt=i+1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(hang[j].stonk > hang[i].stonk){
				app tmp=hang[j];
				hang[j]=hang[i];
				hang[i]=tmp;
			}
		}
	}
	for(int i=0;i<n;i++){
		
		printf("%d %s %s %.2f",hang[i].stt,hang[i].name,hang[i].clas,hang[i].stonk);
		printf("\n");
	}
	
}
