#include<stdio.h>
#include<math.h>
struct triangle{
	double a,b,c;
	double x1,y1,x2,y2,x3,y3;
	double P;
};
typedef struct triangle tri;
void nhap(tri *t){
	scanf("%lf %lf %lf %lf %lf %lf",&t->x1, &t->y1, &t->x2,&t->y2,&t->x3,&t->y3);
	t->a = sqrt((t->x2-t->x1)*(t->x2-t->x1)+(t->y2-t->y1)*(t->y2-t->y1));
	t->b = sqrt((t->x3-t->x2)*(t->x3-t->x2)+(t->y3-t->y2)*(t->y3-t->y2));
	t->c = sqrt((t->x3-t->x1)*(t->x3-t->x1)+(t->y3-t->y1)*(t->y3-t->y1));
	
}
int main(){
	int n;scanf("%d",&n);
	while(n--){
			tri trian;
	nhap(&trian);

		if(trian.a+trian.b <= trian.c || trian.a + trian.c <= trian.b || trian.b+trian.c<=trian.a){
			trian.P = 0;
	}
		else{
		
			trian.P = trian.a+ trian.b+trian.c;
		}
	

		if(trian.P){
			printf("%.3lf\n",trian.P);
		}
		else 
			printf("INVALID\n");
	}

	
}
