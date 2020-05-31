#include <stdio.h>
#include <stdlib.h>



int main() {
	int a[10][10];
	int i=0;
	
	for(i=0;i<5;i++)
	{
	printf("nhap so %d : ",i+1);
    scanf("%d",&a[i]);
    }
    
    for(i=4;i>=0;i--)
    {
    	printf("%d \n",a[i]);
	}
	return 0;
}
