#include<stdio.h>
void swap(int a[],int n){
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
void giao(int a[], int b[], int n, int m){
	int fre[1005];
	int len=0;
	int sx[1005];
	
	for(int i=0;i<n;i++){
		fre[a[i]]++;
	}
		for(int i=0;i<n;i++){
		int check=0;
		if(fre[a[i]]){
				for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				check=1;
				fre[a[i]]=0;
			}
		}
		if(check){
			sx[len++]=a[i];	
			
		}			
		}			
		}
		swap(sx,len);
		for(int i=0;i<len;i++){
			printf("%d ",sx[i]);
		}
	
		
		printf("\n");
}
void a_b(int a[], int b[], int n, int m){
		int len=0;
		int sx[1005];
	
		for(int i=0;i<n;i++){
		int check=1;
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				check=0;
			}
		}
		if(check){
			sx[len++]=a[i];	
				
		}
			
	}
		swap(sx,len);
		for(int i=0;i<len;i++){
			printf("%d ",sx[i]);
		}
	
		printf("\n");
}

void b_a(int a[], int b[], int n, int m){
		int len=0;
		
		int sx[1005];		
		for(int i=0;i<m;i++){
		int check=1;
		for(int j=0;j<n;j++){
			if(a[j]==b[i]){
				check=0;
			}
		}
		if(check){
			sx[len++]=b[i];		
		
		}
			
	}
	
		swap(sx,len);
		for(int i=0;i<len;i++){
		printf("%d ",sx[i]);
		}
	
	
}
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}

	giao(a,b,n,m);
	a_b(a,b,n,m);
	b_a(a,b,n,m);
}
