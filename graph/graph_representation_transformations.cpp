#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef tuple(int, int, int) iii;

vector<vii> AdjMat_to_AdjList(vector<vi> &AdjMat){
	int V = AdjMat.size();
	vector<vii> AdjList(V, vii());
	// takes O(V^2)
	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++){
			if(AdjMat[i][j])
				AdjList[i].emplace_back(j, AdjMat[i][j]); // O(1)
		}
	}
	return AdjList;
}

vector<iii> AdjMat_to_EdgeList(vector<vi> &AdjMat){
	int V = AdjMat.size();
	vector<iii> EdgeList;
	// O(V^2)
	for(int i=0; i<V; i++){
		for(int j=0; j<V; j++){
			if(AdjMat[i][j])
				EdgeList.emplace_back(AdjMat[i][j], i, j);
		}
	}
	return EdgeList;
}

vector<vi> AdjList_to_AdjMat(vector<vii> &AdjList){
	int V = AdjList.size();
	vector<vi> AdjMat(V, vi(V, 0));

	for(int i=0; i<V; i++){
		for(auto &[v, w] : AdjList[i])
			AdjMat[i][v] = w;
		}
	return AdjMat;
}

vector<iii>  AdjList_to_EdgeList(vector<vii> &AdjList){
	vector<iii> EdgeList;
	int V = AdjList.size();
	for(int i=0; i<V; i++){
		for(auto &[v, w] : AdjList[i])
			EdgeList.emplace_back(w, i, v);
		}
	return EdgeList;
}

vector<vi> EdgeList_to_AdjMat(vector<iii> &EdgeList){
	
}

vector<vii> EdgeList_to_AdjList(vector<iii> &EdgeList){
}

int main(){

	return 0;
}
