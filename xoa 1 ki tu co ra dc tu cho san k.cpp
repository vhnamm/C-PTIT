#include<stdio.h>
#include<string.h>

int check(char s[]){
	int len = strlen(s);
	if(len != 7) return 0;
	char pt[10]; strcpy(pt,"python");
	
	
	// xoa 1 ki tu va check cac tu con lai co thanh "python"?
	
	
	for(int i = 0;i<len -1;i++){
		int LenPt = 0;
		int ok=1;
		for(int j =0;j<len-1;j++){
			if(j==i) continue;
			if(s[j] != pt[LenPt]){
				ok =0;
				break;
			}
			++LenPt;
		}
		if(ok) return 1;

	}
		return 0;
}
int main(){
	char s[1000];
	gets(s);
	if(check(s)) printf("YES");
	else 
		printf("NO");
}

