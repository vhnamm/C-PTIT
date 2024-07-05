#include<stdio.h>
#include<string.h>

void sort(int a[], int n, char c){
	if(c=='T'){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]){
					int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
				}
			}
		}		
	}
	else{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[j]>a[i]){
					int tmp=a[j];
					a[j]=a[i];
					a[i]=tmp;
				}
			}
		}		
	}
	
	
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int m,n;
char c;
scanf("%d %d %c",&m,&n,&c);

int a[m], b[n];
for(int i=0;i<m;i++){
	scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
	scanf("%d",&b[i]);
}

	if(c=='T'){
		int ghep[m+n+5];
		int j=0;
		for(int i=0;i<n;i++){
			ghep[j++]=b[i];
			
		}
		for(int i=0;i<m;i++){
			ghep[j++]=a[i];			
		}
		sort(ghep,m+n,c);
		for(int i=0;i<m+n;i++){
			printf("%d ",ghep[i]);
		}
	}
	
	else if(c=='G'){
		int ghep[m+n+5];
		int j=0;
		for(int i=0;i<n;i++){
			ghep[j++]=b[i];
			
		}
		for(int i=0;i<m;i++){
			ghep[j++]=a[i];			
		}
		sort(ghep,m+n,c);
		for(int i=0;i<m+n;i++){
			printf("%d ",ghep[i]);
		}
		
	}
	else if(c=='F'){
		for(int i=0;i<m;i++){
			printf("%d ",a[i]);
		}
		for(int i=0;i<n;i++){
			printf("%d ",b[i]);
		}
	}
	else if(c=='A'){
		for(int i=0;i<n;i++){
			printf("%d ",b[i]);
		}
		for(int i=0;i<m;i++){
			printf("%d ",a[i]);
		}
		
	}
		printf("\n");
	}

}
