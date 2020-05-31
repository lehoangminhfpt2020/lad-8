#include <stdio.h>
#include <stdlib.h>


int main() {
	char a[100];
	int nguyenam,phuam,b,i;
	printf ("nhap tu ban muon kiem tra: ");
	gets(a);
	nguyenam=0;
	phuam=0;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			if(a[i]=='a'||a[i]=='i'||a[i]=='u'||a[i]=='e'||a[i]=='o')
			{
				nguyenam++;
			}
			else
			phuam++;
		}
		
	}
	printf("so nguyen am la: %d \n ",nguyenam);
	printf("so phu am la: %d \n",phuam);
	
	
	
	
	
	return 0;
}
