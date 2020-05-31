#include <stdio.h>
#include <stdlib.h>

/* nhap 1 mang tim gia tri tong min va max*/
int main() {
	int ary[10];
	int i,max=0,min=0,tong;
	for (i=0;i<10;i++)
	{
	printf("\n nhap gia tri %d: ",i+1);
	scanf ("%d",&ary[i]);
	if(i==0)
	{
		max=ary[0];
		min=ary[0];
	}
	if (max<ary[i]) max=ary[i];
	if (min>ary[i]) min=ary[i];
	tong+=ary[i];
    }
    printf ("\n so lan nhat la %d ",max);
    printf ("\n gia tri nho nhat la: %d ",min);
    printf ("\n tong cac gia tri la: %d",tong);
    
	return 0;
}
