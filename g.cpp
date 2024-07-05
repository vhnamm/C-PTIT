#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
int n;scanf("%d",&n);
for(int i=1;i<=2*n-1;i++){
	int m;
	if(n>=i)
		m=n-i+1;
	else
		m=i-n+1;
	int x=n;
	for(int j=1;j<=2*n-1;j++){
		// xu li phan phia tren
		if(i<=n){
			if(j<=i ){
			printf("%d",x--);// xu li phan dau moi hang
			}
			else if(j>i && j<2*n-i){
			printf("%d",m);// xu li phan giua moi hang
			}
			else{
			if(m==1) m+=1;
			printf("%d",m++);// xu li phan cuoi moi hang
			}		
		}
		// xu li phan phia duoi
		else{
			
				
			if(j<=2*n-1-i ){
			printf("%d",x--);
			}
			else if(j>2*n-1-i && j<=i){
			printf("%d",m);
			}
			else{			
			printf("%d",++m);
			}
		}
	}
	printf("\n");
}
}


