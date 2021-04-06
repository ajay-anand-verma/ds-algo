#include<cstdio>
#include<vector>
using namespace std;

typedef vector<int> vi;

class UnionFind {
	private:
		vi p, rank, setSize;
		int numSets;
	public:
		UnionFind(int N){ rank.assign(N,0), setSize.assign(N, 1), numSets=N;
			p.assign(N, 0); for(int i=0; i<N; i++) p[i]=i; }
		int findSet(int i){ return p[i]==i?i:(p[i] = findSet(p[i])); }
		bool isSameSet(int i, int j) { return findSet(i)==findSet(j); }
		int numDisjointSets(){ return numSets; }
		int sizeOfSet(int i){ return setSize[findSet(i)]; }
		void unionSet(int i, int j){
			if(!isSameSet(i, j)){
				numSets--;
				int x = findSet(i), y = findSet(j);
				if(rank[x]>rank[y]){
					p[y] = x;
					setSize[x]+=setSize[y];
				}
				else{
					p[x] = y;
					setSize[y]+=setSize[x];
					if(rank[x]==rank[y])
						rank[y]++;
				}
			}
		}
};

int main(){
	UnionFind UF(7);
	printf("Disjoint Sets %d\n", UF.numDisjointSets());
	for(int i=0; i<7; i++)
		printf("%d is in %d; size of set %d\n", i, UF.findSet(i),UF.sizeOfSet(i));
	
	UF.unionSet(2, 5);
	UF.unionSet(3, 6);
	UF.unionSet(1, 6);
	
	printf("Disjoint Sets %d\n", UF.numDisjointSets());
	for(int i=0; i<7; i++)
		printf("%d is in %d; size of set %d\n", i, UF.findSet(i),UF.sizeOfSet(i));

	return 0;
}

