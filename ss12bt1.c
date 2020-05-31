#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,i,j,n;
	int goc[20];
	int fake[20];
	
	printf("how many number you want to input: \n ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the Number %d: ",i+1);
		scanf("%d",&goc[i]);
	}
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d \n",goc[i]);
		
	}
	return 0;
}
