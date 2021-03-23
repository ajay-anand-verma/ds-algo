#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int id;
	int solved;
	int penalty;
} team;

bool comp(team a, team b){
	if(a.solved==b.solved){
		if(a.penalty==b.penalty)
			return a.id<b.id;
		else
			return a.penalty<b.penalty;
	}
	return a.solved>b.solved;
}

void solve(){
	team ar[] =	{	{1, 3, 40},
					{2, 2, 50},
					{3, 3, 50},
					{4, 2, 50}};

	for(auto x: ar)
		cout<<x.id<<" "<<x.solved<<" "<<x.penalty<<endl;
	
	cout<<"\nSorted"<<endl;
	sort(ar, ar+4, comp);
	for(auto x: ar)
		cout<<x.id<<" "<<x.solved<<" "<<x.penalty<<endl;
}

int main(){
	solve();

	return 0;
}
