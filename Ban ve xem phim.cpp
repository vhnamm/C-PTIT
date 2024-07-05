#include<stdio.h>
#include<math.h>
int check(int a[],int n){
	int mark[101];
	for(int i =0;i<101;i++) mark[i] = 0;
	
	
	if(a[0] != 25) return 0;
	int giave = 25;
	for(int i = 0;i<n;i++){
		
			
			int TraLai = 0;		
		if(giave <= a[i]){
			TraLai = a[i] - giave;
		}
		
		if(TraLai == 0){
			mark[25] += 1;
		}
		
		else if(TraLai == 25){
			if(mark[25] > 0){
				mark[50]+=1;
				mark[25]-=1;
			}
			else
				return 0;
		}
		else if(TraLai ==75){
			if(mark[50] >0 && mark[25]>0){
				mark[100] += 1;
				mark[50] -= 1;
				mark[25] -= 1;
				
			}
			else if(mark[25] >= 3){
				mark[25] -= 3;
			}
			else 
				return 0;
		}
	
}
return 1;
}
int main(){
	int n;scanf("%d",&n);
	int a[n];
	for(int i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	if(check(a,n)) printf("YES");
	else printf("N0");
}
