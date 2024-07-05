#include <stdio.h>
#include <math.h>
#include<string.h>
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			{
				return 0;
				break;
			}
	}
	return 1;
}
int main(){
	char a[20]={0};
	gets(a);

// khoi tao mang dem tan suat b
	int b[20];
	int j=0;// phantu cua b
	for(int i=0;i<strlen(a);i++){
		int ts=1;
		if(a[i]!='0' && snt(a[i]-'0')){ // neu gap phan tu da danh dau thi k duyet so day nua
			for(int k=i+1;k<strlen(a);k++){
				if(a[i]==a[k]){
					ts++;
					a[k]='0';	//	tranh duyet bi trung			
				}
			}
			b[j++]=ts; gan tan suat xuat hiern cua cac snt 
			
		}
		
	}
	int ptumangb=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]!='0' && snt(a[i]-'0'))
	{
			printf("%c %d\n",a[i],b[ptumangb++]);
		}
	}
}

