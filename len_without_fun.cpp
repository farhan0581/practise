//printf returns the no of characters read  and gets returns the input
#include<stdio.h>
int main()
{
	char str[100];
	int t;
     printf("Enter a string: ");
     t=printf("length of %s is=",gets(str));
     printf("%d",t-15);
     
//     printf( "\rLength is: %d",
//              printf("Entered string is: %s\n", gets(str)) - 20
//           );
 
     return 0;
}
