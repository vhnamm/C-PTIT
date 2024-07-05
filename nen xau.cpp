#include<stdio.h>
#include<string.h>
#include<math.h>
char a[1000005];
int main(){
	
	fgets(a,sizeof(a),stdin);
	int n=strlen(a);
	for(int i=0;i<n-1;i++){
		int fre=1;
		while(a[i] == a[i+1]){
			i++;
			fre++;
		}
		printf("%c%d",a[i],fre);
		
	}
}
