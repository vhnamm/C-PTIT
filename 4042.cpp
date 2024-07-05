#include<stdio.h>
struct num{
	int val;
	int fre;
	int ok;
};
typedef struct num num;

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		num a[n+5];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i].val);
			a[i].fre = 1;
			a[i].ok =1;
		}
		
		for(int i=0;i<n;i++){
			if(a[i].ok != 0){
				for(int j=i+1;j<n;j++){
					if(a[i].val == a[j].val){
						a[j].ok =0;
						a[i].fre++;
					}
				}
			}			
		}
		int check =0;
		for(int i=0;i<n;i++){
			if(a[i].ok != 0 && a[i].fre>1){
				check=1;
				printf("%d\n",a[i].val);
				break;
			}
		}
		if(!check) printf("NO\n");
	}
}
