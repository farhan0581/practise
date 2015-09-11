/*program to show the use of xor and shift operator...*/
#include<stdio.h>
#define con(a,b) a##b
int main()
{
	int arr[]={1,2,2,3,3,3,3,4,4,125,1},res=0,size,i;
	int test=23;
	size=sizeof(arr)/sizeof(int);
	printf("%d",size);
	for(i=0;i<size;i++)
	{
		res=res^arr[i];
	}
	printf("the odd occurring number is %d\n",res);
	//shifting
	printf("before shifting test=%d",test);
	test=test<<2;
	printf("after left shifting test=%d",test);
	printf("%d",con(12,13));
	//odd even
	(test & 1)? printf("odd\n"):printf("even\n");
	//checking
	i=10;
	printf("%d %d %d",++i,++i,i);
	return 0;
}
