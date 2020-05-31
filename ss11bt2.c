#include <stdio.h>
#include <stdlib.h>

int main() {
	char a[100];
	int i,n,nguyenam=0;
	printf("nhap ky tu: ");
	gets(a);
	
	n=strlen(a);
	for(i=0;i<n;i++)
	{
			if(a[i]=='a'||a[i]=='i'||a[i]=='u'||a[i]=='e'||a[i]=='o')
			{
				nguyenam++;  
			}
			
	}
	
	printf ("so nguye am la : %d",nguyenam);

	return 0;
}
