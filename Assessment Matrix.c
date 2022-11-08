#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2],row,col,xyz,mul[2][2];
	
	printf("     Matrix Multiplication\n\n");
	printf("----------Matrix: 1-----------\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("Emter elements : ");
			scanf("%d",&arr1[row][col]);
		}
	}
		printf("\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d\t",arr1[row][col]);
		}
		printf("\n");
	}
	
	printf("\n----------Matrix: 2-----------\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("Emter elements : ");
			scanf("%d",&arr2[row][col]);
		}
	}
		printf("\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d\t",arr2[row][col]);
		}
		printf("\n");
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			mul[row][col]=0;
			for(xyz=0;xyz<2;xyz++)
			{
				mul[row][col]=mul[row][col]+arr1[row][xyz]*arr2[xyz][col];
			}
		}
	}	printf("\n");
	
	printf("------Result : Multiplication Matrix------\n\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d\t",mul[row][col]);
		}
		printf("\n");
	}
	
	
}