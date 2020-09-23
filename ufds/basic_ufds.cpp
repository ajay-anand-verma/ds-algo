#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;

vi p, height;

int findSet(int i){ return p[i]==i ? i : p[i] = findSet(p[i]); }

bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }

void unionSet(int i, int j) {
	if(!isSameSet(i, j)){
		int x = findSet(i), y = findSet(j);
		if(x>y) p[y] = x;
		else{
			p[x] = y;
			if(height[x] == height[y]) ++height[y];
		}
	}
}

void print_vec(vector<int> v){
	for(auto &x: v)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	int N, M, u, v;
	cin>>N>>M;
	p.assign(N, 0); for(int i=0; i<N; i++) p[i] = i;
	height.assign(N, 0);
	while(M--){
		cin>>u>>v;
		unionSet(u, v);
	}
	
	cout<<"Parents: "; print_vec(p);
	cout<<"Ranks: "; print_vec(height);

	for(int i=0; i<4; i++){
		cin>>u>>v;
		cout<<u<<" "<<v<<" belongs to ";
		isSameSet(u, v)?cout<<"same set\n":cout<<"different set\n";
		cout<<"Parents: "; print_vec(p);
		cout<<"Ranks: "; print_vec(height);
		cout<<endl;
	}
	return 0;
}
