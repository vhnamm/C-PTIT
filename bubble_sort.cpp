#include<stdio.h>
int main()

{
	int n;scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i = 0; i < n - 1; i++)
    {
       
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                int tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }
        int flag=0;
       
        printf("Buoc %d: ", i + 1);
        for (int k = 0; k < n; k++)
            printf("%d ", a[k]);
             for(int l=0;l<n-1;l++){
        	if(a[l]>a[l+1]){
        		flag++;
			}
		}
		if(!flag) break;
        
        printf("\n");
    }
}
