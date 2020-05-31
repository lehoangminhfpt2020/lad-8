#include <stdio.h>
#include <stdlib.h>


int main() {
	int i,n=0;
	int item;
	char x[10][12];
	char temp[12];
	
	printf ("enter each string on a separate line\n\n");
	printf ("Type 'END' when over \n\n");
	
	/* doc trong danh sach chuoi*/
	do
	{
		printf("string %d: ",n+1);
		scanf("%s",x[n]);
	}
	while(strcmp(x[n++],"END"));
	
	/* sap xep lai danh sach trong chuoi */
	n=n-1;
	for(item =0;item<n-1;++item)
	{
		/* tim chuoi thap nhat*/
		for(i=item+1;i<n;++i)
		{
			if(strcmp(x[item],x[i]>0))
			{
				/* trao doi 2 chuoi */
				strcpy(temp,x[item]);
				strcpy(x[item],x[i]);
				strcpy(x[i],temp);
			}
		}
	}
	/*hien thi danh sach da duoc sap xep*/
	
	printf("recorded list of strings: \n");
	for(i=0;i<n;++i)
	{
		printf("\n string %d is %s",i+1,x[i]);
	}
	return 0;
}
