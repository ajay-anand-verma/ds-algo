#include<cstdio>
#include<vector>
using namespace std;

int main(){
	int ar[5] = {10, 20, 30};
	vector<int> vi(5, 7);
	printf("Sizes\n Array: %d \n Vector: %d\n", (int) sizeof(ar)/sizeof(int), (int) vi.size());
	printf("%d\n", ar[4]);
	return 0;
}
