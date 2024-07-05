#include<stdio.h>
#include<string.h>
// giai thuat QUY HOACH DONG
// bai toan tim day con tang dai nhat
int main(){
	char a[55];
	gets(a);
	int len=strlen(a);
	int L[len];
	for(int i=0;i<len;i++){
		L[i]=1;
	}
	
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if((a[j]-'a'>a[i]-'a') && L[i]+1>L[j]){
				L[j]++;
			}
		}
	}
	int max=0;
	for(int i=0;i<len;i++){
		if(L[i]>max){
			max=L[i];
		}
	}
	printf("%d",26-max);
}

