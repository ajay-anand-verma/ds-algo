#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

class UnionFind{
	private:
		vi p, rank, setSize;
		int numSets, max_set, min_set;
	public:
		UnionFind(int N){
			rank.assign(N, 0), setSize.assign(N,1), numSets=N;
			p.assign(N,0);
			for(int i=0; i<N; i++) p[i]=i;
			max_set = -1;
			min_set = -1;
		}
		int findSet(int i){ return p[i]==i?i:(p[i]=findSet(p[i])); }
		int numOfDisjointSets(){ return numSets; }
		int isSameSet(int i, int j){ return findSet(i)==findSet(j);}
		int sizeOfSet(int i){ return setSize[findSet(i)]; }
		void unionSet(int i, int j){
			if(!isSameSet(i, j)){
				numSets--;
				int x=findSet(i), y=findSet(j);
				if(rank[x]>rank[y]){
					p[y]=x;
					setSize[x]+=setSize[y];
				}
				else{
					p[x]=y;
					setSize[y]+=setSize[x];
					if(rank[x]==rank[y])
						rank[y]++;
				}
				if(min_set==-1){
					min_set=findSet(i);
					max_set=findSet(i);
				}
				else{
					min_set = setSize[findSet(min_set)]>setSize[i]?findSet(i):findSet(min_set);
					max_set = setSize[findSet(max_set)]<setSize[i]?findSet(i):findSet(max_set);
				}
			}


		}
		int max_set_size(){ return setSize[max_set];}
		int min_set_size(){ return setSize[min_set];}

};

int main() {
	int N;
	scanf("%d", &N);
	UnionFind U(N);
	int x, y;
	for(int i=0; i<N; i++){
		scanf("%d %d\n", &x, &y);
		x-=1, y-=1;
		U.unionSet(x, y);
	}
	printf("%d %d\n", U.min_set_size(), U.max_set_size());
	return 0;
}
