#include<stdio.h>
#include<string.h>
#include<ctype.h>
// strlen: tra ve do dai cua xau
int main(){
	char a[10];
	fgets(a,sizeof(a)+1,stdin);
	a[strlen(a)-1]='\0';
	char c='q';
	if(islower(c))
	printf("%d\n",strlen(a));
	else
	printf("%s",a);

}
