#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int id;
	int solved;
	int penalty;
} team;

bool comp(team a, team b){
	// not a good approach for large number of multi-fiels 
	// as nesting level will increase
	if(a.solved==b.solved){
		if(a.penalty==b.penalty)
			return a.id<b.id;
		else
			return a.penalty<b.penalty;
	}
	return a.solved>b.solved;
}

bool comp2(team a, team b){
	// No nesting a better way
	if(a.solved != b.solved)
		return a.solved > b.solved;
	else if(a.penalty != b.penalty)
		return a.penalty < b.penalty;
	else
		return a.id < b.id;
}

void solve(){
	team ar[] =	{	{1, 3, 40},
					{4, 2, 50},
					{3, 3, 50},
					{2, 2, 50}};

	for(auto x: ar)
		cout<<x.id<<" "<<x.solved<<" "<<x.penalty<<endl;
	
	cout<<"\nSorted"<<endl;
	sort(ar, ar+4, comp2);
	for(auto x: ar)
		cout<<x.id<<" "<<x.solved<<" "<<x.penalty<<endl;
}

int main(){
	solve();

	return 0;
}
