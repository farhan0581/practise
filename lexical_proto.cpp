#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
void check_lex(char arr[]);

int main()
{
	char ch,ch2,i=0,temp[20],under[10][10],alpha[10][10],num[10][10],comman[7][4],j=0;
	ifstream f,d;
	f.open("input.txt",ios::in);
	d.open("dfa.txt",ios::in);
	if(!f || !d)
	{
		cout<<"sorry file(s) does not exist";
	}
	f>>resetiosflags(ios::skipws);
	d>>resetiosflags(ios::skipws);

	while(d)
	{
		for(i=0;i<7;i++)
		{
			for(j=0;j<4;j++)
			{
				d>>ch;
				if(ch==' ' || ch=='\n')
					d>>ch;
				comman[i][j]=ch;
			}
		}
	}
	for(i=0;i<7;i++)
		{
			for(j=0;j<4;j++)
			{
				//cout<<comman[i][j]<<" ";
			}cout<<endl;
		}
		
	i=0;
	while(f)
	{
		f>>ch;
		if(ch==' ' || ch==',' || ch=='\n' || ch=='\t')
		{
			temp[i]='\0';
			check_lex(temp);
			i=0;
			f>>ch;
		}
		temp[i++]=ch;
	}

	i=i-1;
	temp[i]='\0';
	check_lex(temp);
	return 0;
}
void check_lex(char arr[])
{
	int i,flag=0;

	if(arr[0]==33)
		flag=1;
	//number
	if(arr[0]>=48 && arr[0]<=57 && arr[0]!=33)
	{
		for(i=1;i<strlen(arr);i++)
		{
			//decimal
			if(arr[i]==46)
				i++;

			if(arr[i]<48 || arr[i]>57)
			{
				//"not a valid lexeme\n";
				flag=1;
			break;
			}

		}
		
	}
	//identifier
	//underscore
	else if(arr[0]==95 || (arr[0]>=97 && arr[0]<=122) || (arr[0]>=65 && arr[0]<=90) && arr[0]!=33)
	{
		for(i=1;i<strlen(arr);i++)
		{
			if((arr[i]>=97 && arr[i]<=122) || (arr[i]>=65 && arr[i]<=90) || (arr[i]>=48 && arr[i]<=57))
			{
				//
			}
			else
			{
				//cout<<"Not a valid lexeme\n";
				flag=1;
				break;
			}
		}
	}
	else
		flag=1;
	if(flag==0)
		cout<<"valid\n";
	else if(flag==1)
		cout<<"invalid\n";

	
	
	cout<<endl;
}