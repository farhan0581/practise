/* DFA acceptance...*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	int fs;
	int arr[10][10];
	int i,j, initial, final[10], k,m, flag=0, state, stin;
	char inval[10];

	ifstream in("input.txt");
	
	in>>initial;
	// cout<<initial;

	i=0;
	while(1){
		in>>fs;
		if(fs==-1){
			break;
		}
		final[i] = fs;
		i++;
	}

	m=i;

	for (i=0;i<4;i++)
		for (j=0;j<3;j++)
			in>>arr[i][j];

	cout<<"Input String : \n";
	cin>>inval;

	k = strlen(inval);
	state = 0;
	for(i=0;inval[i]!='\0';i++){
		stin = inval[i] - 97;
		state = arr[state][stin];
		if (state==-1){
			cout<<"Invalid input\n";
			return 0;
		}
	}

	for(i=0;i<m;i++){
		if(state == final[i]){
			flag=1;
			break;
		}
	}

	if (flag==1)
	{
		printf("Not match !\n");
	}
	else{
		printf("Match !\n");
	}
}
