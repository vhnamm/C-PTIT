#include <stdio.h>


int isPythagoreanTriplet(int a, int b, int c) {
   
    return (a * a + b * b == c * c);
}


int hasPythagoreanTriplet(int arr[], int n) {
    
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (isPythagoreanTriplet(arr[i], arr[j], arr[k])) {
                    return 1; 
                }
            }
        }
    }
    return 0; 
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int check =0;
		if(hasPythagoreanTriplet(a,n))
			check =1;
		
		if(check) printf("YES\n");
		else printf("NO\n");
		
	}
}

