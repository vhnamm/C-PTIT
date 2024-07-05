#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	for(int k=1;k<=t;k++){
		int m,n; scanf("%d %d",&m,&n);
		int a[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		
		int hang;
		int tmp=0;
		for(int i=0;i<m;i++){
			int sum=0;
			for(int j=0;j<n;j++){
				sum+=a[i][j];
			}
			if(sum>tmp)
				{
					tmp=sum;
					hang=i;
				}
		}
		
	
		
		int cot;
		int tmp2=0;
		for(int j=0;j<n;j++){
			int sum=0;
			for(int i=0;i<m;i++){
				if(i==hang)
					continue;
				sum+=a[i][j];
			}
			if(sum>tmp2)
				{
					tmp2=sum;
					cot=j;
				}
		}
	printf("Test %d:\n",k);
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i==hang || j==cot)
					continue;
				printf("%d ",a[i][j]);
			
			}
			printf("\n");
		}
	}
}
