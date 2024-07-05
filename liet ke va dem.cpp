#include<stdio.h>
#include<string.h>
struct Num{
	int fre;
	int so;
	int ok;
};
typedef struct Num Num;
Num a[100005];

int check(int x){
if (x < 10)
        return 1;
    int z = x % 10;
    x /= 10;
    while (x > 0)
    {
        if (z < x % 10)
            return 0;
        z = x % 10;
        x /= 10;
    }
    return 1;
}
int main(){
	int s;	
	int cnt=0;
	
	while(scanf("%d",&s) != -1){
		if(check(s) == 1){		
				a[cnt].so = s;
				a[cnt].fre=1;
				a[cnt].ok=1;
				cnt++;	
		}
		
	}
	for(int i=0;i<cnt;i++){
		if(a[i].ok != 0){
			for(int j=i+1;j<cnt;j++){
				if(a[i].so == a[j].so){
					a[j].ok=0;
					a[i].fre++;
				}
			}
		}
		
	}
	for(int i=0;i<cnt-1;i++){
		for(int j=i+1;j<cnt;j++){
			if(a[j].fre > a[i].fre){
				Num tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
		
	}
	for(int i=0;i<cnt;i++){
		if(a[i].ok != 0)
		printf("%d %d\n",a[i].so, a[i].fre);
	}

}
