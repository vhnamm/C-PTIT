#include<stdio.h>
int main(){
	FILE *f;
	f = fopen("input.txt","w");
	int n; scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
}
