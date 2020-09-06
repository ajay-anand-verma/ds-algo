#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef tuple<int, int, int> iii;

void adjacency_matrix(){
	// 1. Adjacency Matrix represenations
	int V;
	vector< vi > AdjMat;
	cin>>V;
	AdjMat.assign(V, vi(V, 0));
	for(int i=0; i<V; i++)
		for(int j=0; j<V; j++)
			cin>>AdjMat[i][j];

	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++)
			cout<<AdjMat[i][j]<<" ";
		cout<<endl;
	}

	cout<<"Neigbours of each vertex are: "<<endl;
	for(int i=0; i<V; i++){
		cout<<i<<": ";
		for(int j=0; j<V; j++)
			if(AdjMat[i][j]) cout<<j<<" ";
		cout<<endl;
	}
}

void adjacency_list(){
	// 2. Adjacency List representation I
	int V, v, w, k;
	cin>>V;
	vector<vii> AdjList(V, vii());
	for(int i=0; i<V; i++){
		cin>>k; // number of neighbours to i vertex
		for(int j=0; j<k; j++){
			cin>>v>>w;
			AdjList[i].push_back(ii(v, w));
		}		
	}
	// Printing neighbours of each vertex
	cout<<"Neigbours of each vertex are: "<<endl;
	for(int i=0; i<V; i++){
		cout<<i<<": ";
		for(auto &j: AdjList[i])
			cout<<j.first<<" ";
		cout<<endl;
	}

}

void adjacency_list2(){
	// 2. Adjacency List representation II
	int V, k, v, w;
	cin>>V;
	vector<vii> AdjList(V, vii());
	for(int i=0; i<V; i++){
		cin>>k; // Number of neighbours
		for(int j=0; j<k; j++){
			cin>>v>>w;
			AdjList[i].emplace_back(v, w); // Change_1
		}
	}
	// Printing neighbours
	for(int i=0; i<V; i++){
		cout<<i<<": ";
		for(auto &[v, w] : AdjList[i]) // Change_2
			cout<<v<<" ";
		cout<<endl;
	}
}

void edge_list(){
	// 3. Edge List representation I
	int V, E, u, v, w;
	priority_queue< pair<int, ii> > EdgeList;
	cin>>V>>E;
	for(int i=0; i<E; i++){
		cin>>w>>u>>v;
		EdgeList.push(make_pair(-w, ii(u, v)));
	}
	
	cout<<"Printing edges with ascending edge weights"<<endl;
	for(int i=0; i<E; i++){
		pair<int, ii> edge = EdgeList.top(); EdgeList.pop();
		cout<<-edge.first<<" "<<edge.second.first<<" "<<edge.second.second<<endl;
	}
}

void edge_list2(){
	// 3. Edge List represenation II
	int V, E, u, v, w;
	cin>>V>>E;
	vector<iii> EdgeList(E);
	for(int i=0; i<E; i++){
		cin>>w>>u>>v;
		EdgeList[i] = tie(w, u, v);
	}
	sort(EdgeList.begin(), EdgeList.end());
	for(auto &[w, u, v] : EdgeList)
		cout<<w<<" "<<u<<" "<<v<<endl;
}

int main(){
	edge_list2();
	return 0;
}
