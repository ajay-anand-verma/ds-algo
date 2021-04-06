#include <bits/stdc++.h>
using namespace std;

#define INF 10000007

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

void bfs(int s, vector<vii> &AdjList){
	/* 
	 * Graph traversing using BFS
	*/
	queue<int> Q;
	vi visited;
	int n = AdjList.size(); // number of vertices
	visited.assign(n, 0); // mark all vertices unvisited

	Q.push(s);
	visited[s] = 1;
	cout<<"Graph BFS traversing order starting with vertex "<<s<<endl;
	while(!Q.empty()){
		int u = Q.front(); Q.pop();
		cout<<u<<" ";
		for(auto &[v, w]: AdjList[u]){
			if(!visited[v]){
				Q.push(v);
				visited[v] = 1;
			}
		}
	}
	cout<<endl;
}	

void bfs_cormen(int s, vector<vi> &AdjList){
	/*
	 * BFS from Cormen
	*/
	// Initializations
	int n = AdjList.size();
	vi color(n, 0);
	vi parent(n, -1);
	vi dist(n, INF);
	// Start with srouce vertex
	queue<int> Q;
	Q.push(s);
	color[s] = 1;
	parent[s] = -1;
	dist[s] = 0;
	// BFS
	while(!Q.empty()){
		int u = Q.front(); Q.pop();
		for(int i=0; i<AdjList[u].size(); i++){
			int v = AdjList[u][i];
			if(color[v]==0){
				dist[v] = dist[u] + 1;
				parent[v] = u;
				color[v] = 1;
				Q.push(v);
			}
		}
		color[u] = 2;
	}
	cout<<endl;
	cout<<"Distances from source vertex "<<s<<endl;
	for(int i=0; i<n; i++)
		cout<<i<<": "<<dist[i]<<endl;
	cout<<endl;

	cout<<"Parents of each veretx "<<endl;
	for(int i=0; i<n; i++)
		cout<<i<<": "<<parent[i]<<endl;
	cout<<endl;

	cout<<"Color of each vertex "<<endl;
	for(int i=0; i<n; i++)
		cout<<i<<": "<<color[i]<<endl;
}

void bfs_SSSP(int s, vector<vii> &AdjList){
	/*
	 * Using BFS for calculating single source shortest path
	 * Note: This can be used only for unweighted graph; We've added edge cost 1 for all edges.
	 *       This need not be added in AdjList.
	*/
	int n = AdjList.size();
	vi dist(n, INF);
	queue<int> Q;
	dist[s] = 0;
	Q.push(s);
	while(!Q.empty()){
		int u = Q.front(); Q.pop();
		for(auto &[v, w]: AdjList[u]){
			if(dist[v]==INF){
				Q.push(v);
				dist[v] = dist[u] + 1;
			}
		}
	}
	cout<<"Distances from source vertex: "<<s<<endl;
	for(int i=0; i<n; i++)
		cout<<i<<": "<<dist[i]<<endl;
	cout<<endl;
}

int main(){
	int V, k, v, w, s;
	cin>>V;
	vector<vii> AdjList(V, vii());
	for(int i=0; i<V; i++){
		// get all the neighbours of i-vertex
		cin>>k; // number of neighbours
		for(int j=0; j<k; j++){
			cin>>v>>w; // (v:neighbour, w:weight)
			AdjList[i].emplace_back(v, w);
		}
	}
	
	cin>>s; // source vertex
	bfs_SSSP(s, AdjList);

	return 0;
}

