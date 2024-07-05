#include<stdio.h>
#include<math.h>
struct triangle{
	double a,b,c;
	double x1,y1,x2,y2,x3,y3;
	double S;
	double p;
};
typedef struct triangle tri;
void nhap(tri *t){
	scanf("%lf %lf %lf %lf %lf %lf",&t->x1, &t->y1, &t->x2,&t->y2,&t->x3,&t->y3);
	t->a = sqrt((t->x2-t->x1)*(t->x2-t->x1)+(t->y2-t->y1)*(t->y2-t->y1));
	t->b = sqrt((t->x3-t->x2)*(t->x3-t->x2)+(t->y3-t->y2)*(t->y3-t->y2));
	t->c = sqrt((t->x3-t->x1)*(t->x3-t->x1)+(t->y3-t->y1)*(t->y3-t->y1));
	t->p = (t->a + t->b +t->c)*0.5;
}
int main(){
	int n;scanf("%d",&n);
	while(n--){
			tri trian;
	nhap(&trian);

		if(trian.a+trian.b <= trian.c || trian.a + trian.c <= trian.b || trian.b+trian.c<=trian.a){
			trian.S = 0;
	}
		else{
		
			trian.S = sqrt(trian.p*(trian.p-trian.a)*(trian.p-trian.b)*(trian.p-trian.c));
	}

		if(trian.S){
			printf("%.2lf\n",trian.S);
		}
		else 
			printf("INVALID\n");
	

	
}
}
