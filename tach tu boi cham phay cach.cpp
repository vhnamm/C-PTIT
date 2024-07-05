#include<stdio.h>
#include<string.h>
#include<math.h>
char s[1000005];
struct in4{
	char data[50];
	int fre;
};
typedef struct in4 in4;

int tn(char s[]){
	int l =0, r =strlen(s)-1;
	while(l<r){
		if(s[l] != s[r]){
			return 0;
			break;
		}
		++l;--r;
	}
	return 1;
}

int main(){
	in4 a[1000];
	gets(s);
	int len =0;
	char *token = strtok(s," ,.");
	while(token != NULL){
		if(tn(token)){
			int pos = -1;
			for(int i =0;i<len;i++){
				if(strcmp(a[i].data,token )==0){
					pos   = i;
					break;
				}
			}
			if(pos == -1){
				strcpy(a[len].data,token);
				a[len].fre = 1;
				++len;
			}
			else{
				a[pos].fre += 1;
			}
		}
		token = strtok(NULL," ,.");
	}
	for(int i =0;i<len;i++){
		printf("%s %d\n",a[i].data,a[i].fre);
	}
	
}
