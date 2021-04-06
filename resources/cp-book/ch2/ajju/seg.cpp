#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;

typdef vector<int> vi;

class SegmentTree {
	private:
		vi st, A;
		int n;
		int left(int p) { return p<<1 ; }
		int right(int p) { return (p<<1) + 1; }
		
		void build(int p, int L, int R){
			if(L==R)
				st[p] = L;
			else{
				build(left(p), L, (L+R)/2 );
				build(right(p), (L+R)/2 + 1, R);
				int p1 = st[left(p)], p2 = st[right(p)];
				st[p] = A[p1]<=A[p2]?p1:p2;
			}
		}

		int rmq(int p, int L, int R, int i, int j){
			if(i > R || j < L) return -1; //  outside the query range
			if(L >= i && R <= j) return st[p]; // inside querry range

			p1 = rmq(p, L, (L+R)/2, i, j);
			p2 = rmq(p, (L+R)/2 + 1, r, i, j);

			if(p1==-1) return p2;
			if(p2==-1) return p1;

			return (A[p1]<=A[p2])?p1:p2;
		}

	public:
		

};

int main(){

}
