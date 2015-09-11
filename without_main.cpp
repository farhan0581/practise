#include<stdio.h>
#include<stdlib.h>
//#define fun main
//int fun(void)
//{
//	printf("working without main\n");
//	return 0;
//}
int main()
{
	int r=3;
	int *arr[r],c=4,i,j;
	for(i=0;i<r;i++)
	{
		arr[i]=(int *)malloc(sizeof(int)*c);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr[i][j]=10;
		}
	}
	printf("%d",arr[2][2]);
	return 0;
}
