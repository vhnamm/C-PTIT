#include<stdio.h>
#include<math.h>
int main(){
	int n;scanf("%d",&n);
	int a[n+5][n+5];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int mark[100005];
	
	for(int i=0;i<100005;i++) mark[i]=0;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mark[a[i][j]] == i-1)
			mark[a[i][j]] = i;
		}
	}

int m=n;
	int check=0;
	for(int i=0;i<=100000;i++){
		if(mark[i] == m){
			printf("%d ",i);
			check =1;
		}
	}
	if(!check) printf("NOT FOUND");
}
