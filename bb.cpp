#include<stdio.h>
#include<math.h>
void check(int n){
	int m = n;
	int x = n%10;
	int y, c1 =1,c2=0;
	while(n>=10){
		printf("%d %d\n",n%10,n/10%10);
		if(abs(n%10 - n/10%10) != 2)
			c1 =0;		
		n/=10;
	}
	while(m){
		y = m;
		m/=10;
	}
	printf("%d",c1);
}
int main(){
	check(202);
}
