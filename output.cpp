#include<stdio.h>
int main(){
	FILE *f;
	f=fopen("input.txt","r");
	int n;
	fscanf(f,"%d",&n);

	int a[n];
	for(int i=0;i<n;i++){
		fscanf(f,"%d",&a[i]);	
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				int tmp=a[j];
				a[j]=a[i];
				a[i]=tmp;
			}
		}
	}
	fclose(f);
	
	f=fopen("output.txt","w");
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
}
