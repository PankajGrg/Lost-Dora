
#include <bits/stdc++.h>
using namespace std;

#define V 18

	float graph[18][18] =   { 
                                {999,	999,	999,	999,	999,	10.5,	4.5,	999,	999,	999,	999,	999,	18, 	17.4,  	999,	999,	999,	999 },
                                {999,	999,	999,	999,	999,	24, 	999,	999,	999,	999,	999,	999,	999,	999,	18, 	999,	999,	999 },
                                {999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	2.4,	999,	999 },
                                {999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	6,  	999,	999,	999,	999,	999,	7.8 },
                                {999,	999,	999,	999,	999,	999,	999,	999,	999,	4.2,	18, 	999,	999,	999,	999,	999,	999,	9   },
                                {10.5,	24, 	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999 },
                                {4.5,	999,	999,	999,	999,	999,	999,	72, 	999,	999,	999,	999,	999,	999,	999,	999,	999,	999 },
                                {999,	999,	999,	999,	999,	999,	72, 	999,	34.5,	999,	999,	999,	999,	999,	999,	999,	999,	999 },
                                {999,	999,	999,	999,	999,	999,	999,	34.5,	999,	9,  	999,	999,	999,	999,	999,	999,	999,	999 },
                                {999,	999,	999,	999,	4.2,   	999,	999,	999,	9,  	999,	999,	999,	999,	999,	52.5,	999,	999,	999 },
                                {999,	999,	999,	999,	18, 	999,	999,	999,	999,	999,	999,	16.5,	999,	999,	999,	999,	999,	999 },
                                {999,	999,	999,	6,  	999,	999,	999,	999,	999,	999,	16.5,	999,	24, 	999,	999,	999,	999,	999 },
                                {18,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	24, 	999,	999,	999,	999,	19.5,	999 },
                                {17.4,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	9,  	999,	999 },
                                {999,	18, 	999,	999,	999,	999,	999,	999,	999,	52.5,	999,	999,	999,	999,	999,	6,  	999,	999 },
                                {999,	999,	2.4,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	9,  	6,  	999,	13.5,	999 },
                                {999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	19.5,	999,	999,	13.5,	999,	22.5},
                                {999,	999,	999,	7.8,	9,  	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	999,	22.5,	999 }
                            };

	float dist[18];
	bool visited[18];
	int parent[18];
	string names[]={"BANK","GROCERY","HOSPITAL","RESTAURANT"};

int path();
int printPath();
int dijkstra();

int printPath(int parent[], int j)
{
	if (parent[j] != - 1)
	{
		printPath(parent, parent[j]);
		j-=4;
		switch(j)
		{
			case -3:cout<<"BANK   ";break;
			case -2:cout<<"GROCERY   ";break;
			case -1:cout<<"HOSPITAL   ";break;
			case  0:cout<<"RESTAURANT   ";break;
			default: cout<<j<<"   ";
		}
	}
	return 0;

}

int path(int dest)
{
	int i=dest;

	// printing solution
	cout<<"\n\nFINDING THE SHORTEST PATH USING DIJKSTRA ALGORITHM";
	cout<<"\n\n\n\n\n--------------------------------------------------------------------------------------\n\n";
	cout<<"\n\nVertex"<<setw(35)<<"Distance"<<setw(30)<<"Path\n\n";

	//for (int i = 1; i < V; i++)
	cout<<setw(30)<<"\nHOME ---> "<<names[i-1]<<setw(20)<<dist[i]<<" km"<<setw(30)<<"HOME   ";
	//printing path
	printPath(parent, i);
	cout<<"\n\n\n\n--------------------------------------------------------------------------------------\n\n\n\n\n";
	return 0;
}

int dijkstra()
{
	int source =0,i;

	for(i=0;i<18;i++)
	{
		parent[i] = -1;
		dist[i] = 999;
		visited[i] = false;
	}

	dist[source] = 0;

	for (int j=0;j<(V-1);j++)
	{
		int min =999 ,u ;
		// finding the min distance linked to the source vertex and selectint that vertex
		for (i = 0; i < V; i++)
        {
			if (visited[i] == false && dist[i] <= min)
			{
				min = dist[i];
				u = i;
			}
        }

		// selected vertex is added to visited
		visited[u] = true;
		
		// updating the shortest distance
		for (i=0;i<V;i++)
        {
			if (visited[i]==false  &&  dist[u] + graph[u][i] < dist[i])
			{
				parent[i] = u;
				dist[i] = dist[u] + graph[u][i];
			}
        }
	}

	return 0;
}


// int main()
// {
// 	dijkstra();
// 	path(2);
// 	return 0;
// }
