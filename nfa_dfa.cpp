#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	static int com,sy,flag,mcom,msy,i,j,k,lines;
	int arr[10][10][10],narr[10][10],

	//example to understand 3d arrays..

	a[3][2][2]={

		{{1,2},{0}},

		{{10},{20}},

		{{30},{32}}
	};

	char ch;

	ifstream f;
	f.open("farhan_test.txt",ios::in);
	f>>resetiosflags(ios::skipws);
	if(!f)
	{
		cout<<"file does not exist\n";
	}
	//msy=1000;//finding symbols in the text file..
//	while(f)
//	{
//		f>>ch;
//			if(ch!=' '&&ch!='\n')
//				sy++;
//			if(ch==',')
//			{
//				com++;
//			}
//
//			if(flag==1)
//			{
//				if(mcom<com)
//					mcom=com;
//				if(msy>sy)
//					msy=sy;
//				flag=0;
//				com=0;sy=0;
//			}
//
//		if(ch=='\n')
//			{
//				lines++;
//				flag=1;
//			}
//	}
//	cout<<"gdfg="<<lines<<"cb="<<msy;
	//now initilaize the 3d array

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			for(k=0;k<5;k++)
				arr[i][j][k]=-1;

	//int arr[lines+1][2][mcom+1];

	//f.clear();
	//f.seekg(0,ios::beg);

	flag=0;

	//Reading from file..

	i=0,j=0,k=0;
	
	while(f)
	{
		f>>ch;
		//cout<<ch;
		if(flag==1)
			k=0;
		
		if(ch=='\n')
		{
			i++;
			j=0;
			f>>ch;
		}
		if(ch==',')
		{
			k++;j--;
			flag=1;
			f>>ch;
		}
		if(ch!=' ' && ch!='\t')
		{
			arr[i][j][k]=ch-48;
			//cout<<arr[i][j][k];
			j++;
		}
		
	}
	i=j=k=0;
	//cout<<"lines,sy,com="<<lines<<" "<<msy<<" "<<mcom<<endl;;
	//Now create another array by renaming the extra states found..
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		
		cout<<arr[i][j][0]<<" ";
		}cout<<endl;
	}
//	for(i=0;i<=lines;i++)
//	{
//		for(j=0;j<(msy-1);j++)
//		{
//			if(arr[i][j][k+1]!=-1)
//				cout<<arr[i][j][k+1];
//			cout<<arr[i][j][k]<<" ";
//		}cout<<endl;
//	}

	return 0;
}
//function to add new state..
void newstate(int parr,int pnarr,int i,int j,int newst)
{
	
}
