#include <stdio.h>
#include <stdlib.h>


int main() {
	int goc[50];
	int max=0,min=0;
	int i,j,n;
	printf ("ban muon nhap bao nhieu so: \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("nhap so %d: ",i+1);
		scanf("%d",&goc[i]);
	}
	
	min=goc[0];
	max=goc[0];
	
	for(i=0;i<n;i++)
	{
		if(max<goc[i]) 
		{
			max=goc[i];
		}
	}

	for(i=0;i<n;i++)
	{
		if(min>goc[i]) 
		{
			min=goc[i];
		}
	}
	printf("so lon nhat: %d \n",max);
	printf("so nho nhat: %d \n",min);

	return 0;
}
