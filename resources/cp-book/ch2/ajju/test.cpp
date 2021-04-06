#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}

int main(){
	int ar[] = {3, 34, 21, 56, 4,5, 23};
	vector<int> vi(ar, ar+sizeof(ar)/sizeof(int));
	for(int i=0; i<vi.size(); i++)
		printf("%d ", vi[i]);
	printf("\n");
	sort(vi.begin(), vi.end(), cmp);
	for(int i=0; i<vi.size(); i++)
		printf("%d ", vi[i]);
	printf("\n");

	return 0;
}
