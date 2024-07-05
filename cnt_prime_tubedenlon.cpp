#include<stdio.h>
#include<math.h>

int is_prime(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	for(int j=1;j<=t;j++){
		int cnt[100005]={0};
		int n;scanf("%d",&n);
		int a[105];
		int max=-10e3;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]>max){
				max=a[i]; // xem chi so max can duyet
			}
		}
		
		for(int i=0;i<n;i++){
			if(is_prime(a[i])){
				cnt[a[i]]++;
			}
		}
		printf("Test %d:\n",j);
		
		for(int i=1;i<=max;i++){ // duyet lan luot den so lon nhat-> da sxep theo ttu
			if(cnt[i]!=0){
				printf("%d xuat hien %d lan\n",i,cnt[i]);
				
			}
		}
		printf("\n");
	}
}
