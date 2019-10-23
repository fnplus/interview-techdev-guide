#include<bits/stdc++.h>
using namespace std;
//recursive function to perform dfs
void _dfs(vector<int> G[],int src,bool visited[],vector<int> &result){
	result.push_back(src);
	visited[src] = true;
	
	for(int i=0;i<G[src].size();i++){
		if(!visited[G[src][i]]){
			_dfs(G,G[src][i],visited,result);
		}
	}	
}
//wrapper for _dfs
vector<int> dfs(vector<int> G[],int n,int src){
	bool visited[n];
	memset(visited,false,sizeof(visited));
	vector<int> result;
	_dfs(G,src,visited,result);
	return result;
}
//add edge between x and y
void addEdge(vector<int> G[],int x,int y){
	G[x].push_back(y);
	G[y].push_back(x);
}
int main() {
	int n = 5; //number of nodes
	vector<int> G[5];	//initialize undirected graph g
	addEdge(G,0,1);	//add edge between 0 to 1
	addEdge(G,1,2);	//add edge between 1 to 2
	addEdge(G,2,3);	//add edge between 2 to 3
	addEdge(G,0,3);	//add edge between 0 to 3
	addEdge(G,3,4);	//add edge between 3 to 4
	vector<int> output = dfs(G,n,3); //choosing 3 as start vertex
	//print dfs output
	for(int i=0;i<output.size();i++){
		cout<<output[i]<<" \n"[i==output.size()-1];
	}
	return 0;
}
