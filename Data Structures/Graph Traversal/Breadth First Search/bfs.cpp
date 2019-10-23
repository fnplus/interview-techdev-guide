#include<bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int> G[],int n,int src){
	vector<int> result;
	bool visited[n];
	memset(visited,false,sizeof(visited));

	queue<int> q;
	q.push(src);

	while(!q.empty()){
		int curr = q.front();
		q.pop();
		if(!visited[curr]){
			result.push_back(curr);
			visited[curr] = true;
			for(int i=0;i<G[curr].size();i++){
				q.push(G[curr][i]);
			}
		}
	}
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
	vector<int> output = bfs(G,n,0); //choosing 3 as start vertex
	//print dfs output
	for(int i=0;i<output.size();i++){
		cout<<output[i]<<" \n"[i==output.size()-1];
	}
	return 0;
}