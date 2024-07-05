#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int m=1;
    for (int i = 1; i <= n; i++)
    {
       
        if(i%2==0){
        	m+=i;
		}
		else
			m+=i-1;
        for (int j = 1; j <= i; j++)
        {
            if(i%2==0){
            	printf("%c ",96+m);
            	m--;
            	if(j==i) m++;
				
			}
			else{
				printf("%c ",96+m);
				m++;
				if(j==i) m--;
			}
        }
        printf("\n");
    }
    return 0;
}
