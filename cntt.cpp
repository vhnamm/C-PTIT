#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct gv{
	int ma;
	char name[50];
	char sub[30];
	char tat[10];
};
typedef struct gv gv;
int main(){
	int id =1;
	int n;scanf("%d",&n);
	gv a[n];
	for(int i =0;i<n;i++){
		scanf("\n");
		gets(a[i].name);
		gets(a[i].sub);
		a[i].ma = id;
		id++;
	}

//Viet tat bo mon
	for(int i =0;i<n;i++){
		int j =0;
		for(int k =0;k<strlen(a[i].sub);k++){
			if(k == 0 || a[i].sub[k-1] == ' '){
				a[i].tat[j++] = toupper(a[i].sub[k]);
			}
		}
		a[i].tat[j] = '\0';
	}
	
	
	int q;scanf("%d",&q);
	while(q--){
		scanf("\n");
		char bomon[30];
		gets(bomon);
		
	}
}
