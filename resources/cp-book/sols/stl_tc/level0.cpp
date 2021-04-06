#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int ar[]={10, 20, 30, 2, 60};
	vector<int> vi(ar, ar+5);
	for(int i=0; i<vi.size(); i++)
		printf("%d ", vi[i]);
	printf("\n size: %d\n", (int)vi.size());
	
	// reseting and clearing vector
	vi.assign(vi.size(), 0);
	for(int i=0; i<vi.size(); i++)
	printf("%d ", vi[i]);
	printf("\n size: %d\n", (int)vi.size());
	vi.clear(); // does not makes all elements to be zero rather deletes whole vector
	printf("\n size: %d\n", (int) vi.size());

	// Multidimensional array
	int R, C;
	printf("\nDimensions of matrix: ");
	scanf("%d %d", &R, &C);
	vector< vector < int> > Matrix(R, vector<int>(C, 4));
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++)
			printf("%2d ", Matrix[i][j]);
		printf("\n");
	}

	// max and min element
	vi.clear();
	vi.assign(ar, ar+5);
	int index = min_element(vi.begin(), vi.end())-vi.begin();
	printf("at %d : %d\n", (int) index, *(index+vi.begin()));

	return 0;
}
	
