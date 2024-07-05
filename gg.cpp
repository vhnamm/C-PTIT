#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int min= a<b?a:b;
	int max= a>b?a:b;
	int cnt=0;
	for(int i=min;i<=max;i++){
		for(int j=sqrt(min);j<=sqrt(max);j++){
			if((i/j)==j) cnt++;
			}
		}
	}
	printf("%d\n",cnt);
	for(int i=min;i<=max;i++){
		for(int j=sqrt(min);j<=sqrt(max);j++){
			if(i/j==j) printf("%d ",i);
			}
		}
	}
}
