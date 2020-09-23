#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi p;
int numSets;

int findSet(int i) { return p[i] == i ? i : p[i] = findSet(p[i]); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void unionSet(int i, int j) {
	if(!isSameSet(i, j)){
		int x = findSet(i), y = findSet(j);
		p[y] = x;
		numSets--;
	}
}

int main(){
	int N, K, u, v;
	cin>>N;
	numSets = N;
	p.assign(N, 0); for(int i=0; i<N; i++) p[i] = i;
	cin>>K;
	while(K--){
		cin>>u>>v;
		unionSet(u-1, v-1);
	}
	cout<<numSets<<endl;
}
