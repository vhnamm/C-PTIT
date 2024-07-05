#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int check(char s[]){
	int len = strlen(s);
	if((s[0]-'0') % 2==0 && (s[len -1]-'0')%2 !=0) return 0;
	if((s[0]-'0') % 2!=0 && (s[len-1]-'0') %2 == 0) return 0;
	
	
	for(int i =0;i<len-1;i++){
		if(abs((s[i]-'0') - (s[i+1]-'0')) == 3){
			return 0;
			break;
		}
	}
	
	for(int i =0;i<len-1;i++){
		if((s[i]=='2' && s[i+1]=='8') || (s[i]=='8' && s[i+1]=='2')){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char s[1005];
		scanf("%s",s);
		if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
}
