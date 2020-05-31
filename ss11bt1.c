#include <stdio.h>
#include <stdlib.h>


int main() {
	char goc[100][100];
	fflush(stdin);
	char fake[100];
	fflush(stdin);
	int i,j;
	int n=7;
	
	for (i=0;i<n;i++)
	{
		printf("nhap ten %d : ",i+1);
		scanf("%s",goc[i]);
	}
	
	for(i=1;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(strcmp(goc[j-1],goc[j])>0)
			{
				strcpy(fake,goc[j-1]);
				strcpy(goc[j-1],goc[j]);
				strcpy(goc[j],fake);
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
	printf("\n ten %d la: %s ",i+1,goc[i]);
	}
	return 0;
}
