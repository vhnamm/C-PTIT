#include<stdio.h>
#include<string.h>
struct so{
	char data[50];
	int fre;
};
typedef struct so so;

int polydrome(char a[]){
	int l =0, r = strlen(a)-1;
	while(l<r){
		if(a[l] != a[r]){
			return 0;
			break;
		}
		++l;--r;
	}
	return 1;
}
	so dest[100005];
int main(){
	char s[50];
	

	
	int len = 0;
	while(scanf("%s",s) != -1){
		if(polydrome(s)){
			int posbiLap = -1;
			for(int i =0 ;i<len;i++){
				if(strcmp(dest[i].data,s) == 0){
					posbiLap = i;
					break;
				}
			}
			if(posbiLap == -1){
				strcpy(dest[len].data,s);
				dest[len].fre = 1;
				++len;
				
			}
			else{
				dest[posbiLap].fre += 1;
			}
		}
	}
	for(int i =0;i<len;i++){
		printf("%s %d",dest[i].data,dest[i].fre);
		printf("\n");
	}
}
