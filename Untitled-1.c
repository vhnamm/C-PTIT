#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	int k=0;
	while(k<=t){
		++k;
			printf("Test %d:\n",k);
		 int n,m,p;scanf("%d %d %d",&n,&m,&p);
	int a[n],b[m];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<m;i++)
		scanf("%d",&b[i]);

	
	int c[n+m];
	for(int i=0;i<p;i++){
		c[i]=a[i];
	}
	for(int i=p;i<p+m;i++){
		c[i]=b[i-p];
	}
	for(int i=p+m;i<m+n;i++){
		c[i]=a[i-m];
	}
	
	for(int i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	
	printf("\n");	
	k=0;
		
	}
	
	
   
    
}
