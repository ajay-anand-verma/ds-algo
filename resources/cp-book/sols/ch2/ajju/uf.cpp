#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

vector<int> vi;

class ufds{
	private:
		int numSets;
		vi Setsize, p, rank;
	public:
		ufds(int N){ nuSets=N; rank.assign(N,0);
			p.assign(N,0); for(int i=0; <N; i++){ p[i] = i; } 
			rank.assign(N,0):
		}
		int findset(int u){ 
			return p[u]==u?u:(p[u] = findset(p[u]));



			


