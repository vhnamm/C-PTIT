#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
struct gamer{
	char username[25];
	char password[35];
	char realname[100];
	char start[10];
	char end[10];
	
	long tongtgian;
};
typedef struct gamer gamer;

int comp(const void*a, const void *b){
	gamer *x = (gamer*)a;
	gamer *y = (gamer*)b;
	if(x->tongtgian != y->tongtgian){
		if(y->tongtgian > x->tongtgian)
			return 1;
		else
			return -1;
	}
	return strcmp(x->username,y->username);
}

int main(){
	int n;scanf("%d",&n);
	gamer a[n];
	scanf("\n");
	for(int i=0;i<n;i++){
		gets(a[i].username);
		gets(a[i].password);
		gets(a[i].realname);
		gets(a[i].start);
		gets(a[i].end);
	}
	
	for(int i=0; i<n;i++){
		long start_i =((a[i].start[0]-'0')*10 + ( a[i].start[1]-'0')) *60 + ((a[i].start[3]-'0')*10 + (a[i].start[4]));
		long end_i = ((a[i].end[0]-'0')*10 + ( a[i].end[1]-'0')) *60 + ((a[i].end[3]-'0')*10 + (a[i].end[4]));
		a[i].tongtgian = end_i - start_i;
	}
	qsort(a,n,sizeof(gamer),comp);
	
	for(int i=0 ;i<n;i++){
		printf("%s %s %s %ld gio %ld phut\n",a[i].username, a[i].password,a[i].realname, a[i].tongtgian/60,a[i].tongtgian%60);
	}
}
