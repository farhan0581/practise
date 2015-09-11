/*Recursive implementation of dfs
can also be modified to find storngly connected components by taking 
the largest finishing time*/
#include <iostream>
using namespace std;
void dfs(int s);
int arr[6][6]={{0,1,0,1,0,0},{0,0,1,0,1,0},{0,0,0,0,0,0},
					{0,0,0,0,1,0},{0,0,1,0,0,1},{0,0,0,0,0,0}
	};
	static int visit[6],dis[6],fin[6],time=0;
int main()
{
	int start;
	cout<<"enter the start node\n";
	cin>>start;
	dfs(start);
	for(int i=0;i<6;i++)
	{
		if(visit[i]!=1)
		dfs(i);
	}
	for(int i=0;i<6;i++)
	{
		cout<<"vis:fin="<<visit[i]<<":"<<fin[i]<<endl;
	}
	return 0;
}
void dfs(int s)
{
	int i;
	time++;
	dis[s]=time;
	cout<<s<<"->";
	for(i=0;i<6;i++)
	{
		if(arr[s][i]==1 && visit[i]==0)
		{
			dfs(i);
		}
		
	}
	fin[s]=++time;
	visit[s]=1;
}
