#include<stdio.h>
#include<math.h>
int main(){
	long a,b;
	scanf("%ld %ld",&a,&b);
	for(long i=ceil(sqrt(a)); i<=sqrt(b);i++){
		printf("%ld ",i*i);
	}
}
