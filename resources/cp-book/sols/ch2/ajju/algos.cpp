#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> vi){
	for(int i=0; i<vi.size(); i++)
		printf("%d ", vi[i]);
	printf("\n");
}

void print(int arr[], int n){
	for(int i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(){
	int ar[] = {10, 20, 33, 2, 98, 34, 453, -34};
	vector<int> vi(ar, ar+(int)sizeof(ar)/sizeof(int));
	print(vi);
	print(ar,(int)(sizeof(ar)/sizeof(int)));

	sort(ar, ar+ sizeof(ar)/sizeof(int));
	reverse(ar, ar+ sizeof(ar)/sizeof(int));

	print(vi);
	print(ar,(int)(sizeof(ar)/sizeof(int)));
	
	printf("randomized vi\n");
	random_shuffle(vi.begin(), vi.end());
	print(vi);
	partial_sort(vi.begin(), vi.begin()+2, vi.end());
	print(vi);

	return 0;
}
