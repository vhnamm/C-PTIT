#include<stdio.h>
#include<string.h>
int main(){
	int n;scanf("%d",&n);
	char a[n+5];
	for(int i=0;i<n;i++){
		scanf("%c",&a[i]);
		getchar();
	}
	int b[6]; for(int i=0;i<6;i++) b[i]=0;
	
	for(int i=0;i<n;i+=2){
		if(a[i]=='2') b[0]=1;
		if(a[i]=='8') b[1]=1;
		if(a[i]=='t') b[2]=1;
		if(a[i]=='e') b[3]=1;
		if(a[i]=='c') b[4]=1;
		if(a[i]=='h') b[5]=1;
	}
	int check =1;
	for(int i=0;i<6;i++){
		if(b[i] == 0)
		{
			check =0;
			break;
		}
	}
	if(check) printf("28TECH");
	else printf("HCET82");
	
}
