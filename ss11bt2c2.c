#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,nguyenam=0;
	char a[100];
	printf("nhap ky tu: ");
	gets(a);
	while(a[i++]!='\0')
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='u'||a[i]=='e'||a[i]=='o')
			{
				nguyenam++;
			}
	}
	
	printf ("so nguyen am la: %d",nguyenam);
	
	return 0;
}
