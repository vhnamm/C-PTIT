#include<stdio.h>
#include<math.h>
int b[1000005]={0};
int main(){
int n;scanf("%d",&n);
int a[105];

for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}

for(int i=0;i<n;i++){
	b[a[i]]++;
}

int dem=0;
for(int i=0;i<n;i++){
	
	if(b[a[i]]>1 ){
		printf("%d ",a[i]);
		b[a[i]]=0;
		++dem;
	}
}
if(!dem) printf("%d",0);	


	
}

