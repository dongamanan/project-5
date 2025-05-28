#include<stdio.h>
int main()
{
	int size,sum;
	
	printf("Enter the array's row & column size:");
	scanf("%d",&size);
	
	printf("Enter array's element:\n");
	int a[size][size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int transpose[size][size];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	
	printf("\nthe transpose matrix of an array:\n");
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
}