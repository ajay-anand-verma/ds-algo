#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vi p;

int findSet(int i) { return p[i] == i ? i : p[i] = findSet(p[i]); }
bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
void setUnion(int u, int v){
	if(!isSameSet(u, v)){
		int x = findSet(u), y = findSet(v);
		if(x>y)
			p[y] = x;
		else
			p[x] = y; 
	}
}

void winner(int u, int v){
	if(isSameSet(u,  v)) cout<<"TIE"<<endl;
	else{
		int x = findSet(u), y = findSet(v);
		if(x>y)
			cout<<u+1<<endl;
		else
			cout<<v+1<<endl;
	}
}

int main(){
	int N, M, Q, u, v;
	cin>>N>>M;
	p.assign(N, 0); for(int i=0; i<N; i++) p[i] = i;
	while(M--){
		cin>>u>>v;
		setUnion(u-1, v-1);
	}
	cin>>Q;
	while(Q--){
		cin>>u>>v;
		winner(u-1, v-1);
	}
	return 0;
}
	
