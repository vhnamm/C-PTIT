#include<stdio.h>
int main(){
	int n;scanf("%d",&n);
	int dem=0;
	for(int i=1;i<=n;i++){
		if(i%2==0)
		dem+=i;
		else 
		dem+=i-1;
		for(int j=1;j<=n;j++){
			if(i==1 && j<=i) printf("%d",1);
			else if(j<=i && i%2!=0){
				
				printf("%d",dem++ );
			}
			else if(j<=i && i%2==0){
			
				printf("%d",dem--);
			}
		}
		printf("\n");
	}
}
