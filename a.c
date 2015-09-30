#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *p;
	char arr[10][10];
	char final[10];
	char ch, *inputstr;
	int state,begin,i=0,j=0,k=0,l=0,f=0,flag =0,flag2=0,val=0;

	p = fopen("m1.txt","r");
	inputstr = (char *)malloc(sizeof(char)*100);
	fscanf(p,"%ch",&ch);
	begin = ch-48;
	fscanf(p,"%ch",&ch);
	fscanf(p,"%ch",&ch);

	while(ch!='\n')
	{
		if(ch!=' ')
			final[f++] = ch-48;
		fscanf(p,"%ch",&ch);

	}

	fscanf(p,"%ch",&ch);

	while(!feof(p))
	{
		if(ch == '\n')
		{
			i++;
			j=0;
		}
		else if(ch!=' ')
		{
			arr[i][j]=ch;
			j++;
		}

		fscanf(p,"%ch",&ch);
		
	}


	k=0;
	while(1)
	{
		k=0;
		printf("Enter the input string:\n");
		scanf("%s",inputstr);
		state = begin;
		
		while(*(inputstr+k)!='\0')
		{
			if(*(inputstr+k)-97>=0 && *(inputstr+k)-97<=(j-2))
			{
				printf("%d\n",arr[state][2]-48);
				val = inputstr[k]-97;
				if(arr[state][val] == '-')
				{
					flag=1;
					break;
				}
				state = arr[state][val] - 48;
				k++;
			}
			else
			{
				flag=1;
				break;
			}
		}
		l=0;
		
		while(l<f)
		{
			if(final[l++]==state)
			{
				flag2 = 1;
				break;
			}
		}

		if(flag==1 || flag2==0)
			printf("STRING NOT ACCEPTED\n");
		else
			printf("STRING ACCEPTED\n");
		flag =0;
		flag2 =0;
		strcpy(inputstr,"\0");

	}
}

