#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct {
	int id;
	int solved;
	int penalty;
} team;

bool icpc_cmp(team a, team b){
	if(a.solved!=b.solved)
		return a.solved>b.solved;
	else if(a.penalty!=b.penalty)
		return a.penalty<b.penalty;
	else
		return a.id<b.id;
}

int main(){
	team n[4] = {{1, 1, 10},
				 {2, 3, 60},
				 {3, 1, 20},
				 {4, 3, 60}};
	// without sorting
	for(int i=0; i<4; i++)
		printf("id: %d, solved: %d, penalty: %d\n", n[i].id, n[i].solved, n[i].penalty);
	
	// sort using comparision function
	sort(n, n+4, icpc_cmp);
	printf("====================================\n");
	for(int i=0; i<4; i++)
		printf("id: %d, solved: %d, penalty: %d\n", n[i].id, n[i].solved, n[i].penalty);

	printf("============== Binary Search  ==========================\n");
	
	int ar[] = {23,4, -45, 3, -6, 34, 0, 22, 56};
	int l = (int)(sizeof(ar)/sizeof(int));
	vector<int> vi(ar, ar+l);
	int *pos;
	int el;
	sort(ar, ar+l);
	for(int i=0; i<l; i++)
		printf("%d ", ar[i]);
	printf("\n");
	scanf("%d", &el);
	pos = lower_bound(ar, ar+l, el);
	if((pos-ar)>=l) printf("Element not found\n");
	else
		printf("Found at index %d \n",(int) (pos-ar));

	return 0;
}
