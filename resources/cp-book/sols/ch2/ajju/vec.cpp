#include<cstdio>
#include<vector>
using namespace std;

int main(){
	int arr[] = {10, 3, 2, 44, 53, 60, 34, 56};
	vector<int> vi(arr+2, arr+7);
	for(int i=0; i<vi.size(); i++)
		printf("%d ",vi[i]);
	return 0;
}

