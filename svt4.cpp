#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n){
	int m = n;
	int x = n%10;
	int y, c1 =1,c2=0;
	while(n>=10){
		if(abs(n%10 - n/10%10) != 2)
			c1 =0;		
		n/=10;
	}
	while(m){
		y = m;
		m/=10;
	}
	if(x == y) c2  = 1;
	
	if(c1==1 && c2==1)
		return 1;
	else
		return 0;
}
int main(){
	int a,b;scanf("%d %d",&a,&b);
	if(b<a){
		int t =b;
		b=a;
		a=t;
	}
	int flag = 1;
	for(int i =a ; i<=b ;i++){
		if(check(i)){
			printf("%d ",i);
			flag = 0;
			
		}
	}
	if(flag == 1) printf("28tech");
}
