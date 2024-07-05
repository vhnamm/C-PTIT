#include<stdio.h>
#include<math.h>
int main(){
	int n;scanf("%d",&n);
	int m=n;
	for(int i=2;i<=sqrt(m);i++){
		if(m%i==0){
			printf("%d ",i);
			while(m%i==0){
			m/=i;			
		}
	
		}		
	}
	if(m>1) printf("%d",m);
	printf("\n");
	
	int p=n;
	for(int i=2;i<=sqrt(p);i++){
		int dem=0;
		if(p%i==0){
			while(p%i==0){	
			dem++;		
			p/=i;
						
		}
		printf("(%d, %d) ",i,dem);
		}		
	}
	if(p>1) printf("(%d, %d)",p,1);
	printf("\n");
	
	
	for(int i=2;i<=sqrt(n);i++){
		
		if(n%i==0){
			while(n%i==0){			
			
			 printf("%d ",i);
				n/=i;
			if(n!=1) printf("x ");	
		}
		
		}		
	}
	if(n>1) printf("%d",n);
}
