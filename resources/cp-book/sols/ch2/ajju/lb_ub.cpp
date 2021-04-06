#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int ar[] = {12, 34, 45, 45, 45, 56, 67, 78, 78, 88, 89, 89};
	vector<int> vi(ar, ar+12);
	for(int i=0; i<12; i++)
		printf("%d ", vi[i]);
	printf("\n");
	
	for(int i=0; i<12; i++)
		printf("%2d ", i);
	printf("\n");

	printf("%d\n", *upper_bound(vi.begin(), vi.end(), 45));
	return 0;
}

