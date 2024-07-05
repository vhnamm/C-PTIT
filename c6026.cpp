#include<stdio.h>
#include<string.h>
int thuannghich(char s[]){
	int l=0, r=strlen(s)-1;
	while(l<r){
		if(s[l] != s[r])
			return 0;
		++l;--r;
	}
	return 1;
}
struct lenght_fre{
	int dodai, tansuat;
};
typedef struct lenght_fre lf;
int main(){
	char s[1005];
	char dest[1005][1005];
	int len=0;


	while(scanf("%s",s) != -1){
		if(thuannghich(s))
			strcpy(dest[len++],s);		
	}
	lf thongSo[len+5];
	for(int i=0;i<len;i++){
		thongSo[i].dodai= strlen(dest[i]);
		thongSo[i].tansuat =1;
	}
	int check[len+5];
	for(int i=0;i<len;i++) check[i]=1;
	
	for(int i=0;i< len-1;i++){
		if(check[i]){
			for(int j=i+1;j<len;j++){
				if(strcmp(dest[i],dest[j])==0){
					thongSo[i].tansuat++;
					check[j]=0;
				}
			}
		}
	}
	int max=0;
	for(int i=0;i<len;i++){
		if(thongSo[i].dodai>max){
			max=thongSo[i].dodai;
		}
	}
	
	for(int i=0;i<len;i++){
		if(thongSo[i].tansuat == max && check[i]){
			printf("%s %d\n",dest[i],thongSo[i].tansuat);
		}
	}
}
