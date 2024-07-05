#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	FILE *f;
	f =fopen("input2.txt","r");
	int cnt=0;
	int x;
	int status=fscanf(f,"%d",&x);
	while(status != EOF){
		
		if(x==n)
			++cnt;
		status=fscanf(f,"%d",&x);
	}	
	fclose(f);
	
	f = fopen("output2.txt","w");
	fprintf(f,"%d",cnt);
	fclose(f);
	
	f = fopen("output2.txt","r");
	int kq; 
	fscanf(f,"%d",&kq);
	fclose(f);
	
	
	printf("%d",kq);

}
