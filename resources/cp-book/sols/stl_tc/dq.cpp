#include<cstdio>
#include<queue>
using namespace std;

int main(){
	deque<int> dq;
	dq.push_back(10);
	dq.push_back(30);
	dq.push_front(45);
	dq.push_front(32);
	
	deque<int> dd;
	dd=dq;
	
	while(!dq.empty())
		printf("%d ", dq.front()), dq.pop_front();
	printf("\n");

	for(int i=0; i<dd.size(); i++)
		printf("%d ", dd[i]);
	printf("\n");
	swap(dd[3], dd[1]);
	for(int i=0; i<dd.size(); i++)
		printf("%d ", dd[i]);
	printf("\n");

	return 0;
}

