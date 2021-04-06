#include<cstdio>
#include<queue>
#include<string>
using namespace std;

bool operator()(pair<int, string> a, pair<int, string> b){
	if(a.first!=b.first)
		return a.first<b.first;
	else
		return a.second<b.second;
}

int main(){
	int money;
	char name[30];

	priority_queue< pair<int, string> , cmp> pq;
	pair<int, string> result;

	pq.push(make_pair(100, "Ayush"));
	pq.push(make_pair(80, "Biba"));
	pq.push(make_pair(83, "Nima"));
	pq.push(make_pair(80, "Chana"));
	pq.push(make_pair(78, "Dolyy"));
	pq.push(make_pair(100, "Azan"));

//	result = pq.top(), pq.pop();
//	printf("%d %s\n", result.first, (result.second).c_str());
//	result = pq.top(), pq.pop();
//	printf("%d %s\n", result.first, (result.second).c_str());
	return 0;
}
