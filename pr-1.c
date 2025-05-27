#include<stdio.h>
int main()
{
	int size,i;
	
	printf("Enter the array's size:");
	scanf("%d",&size);
	printf("Enter array's element:\n");
		int a[size];
	for(int i=0;i<size;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Negative element from an Array:\n");
	for(int i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
}
