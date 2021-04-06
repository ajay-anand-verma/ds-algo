#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

typedef struct {
	int id;
	int marks;
	string name;
} student;

int main(){
	student stu[4] = { {1, 20, "alok"},
					   {1, 20, "alka"},
					   {1, 20, "ajay"},
					   {1, 20, "pawan"} };
	typedef pair<int, pair<int, string> > state;
	state a= make_pair(stu[0].id, make_pair(stu[0].marks, stu[0].name));
	state b= make_pair(stu[1].id, make_pair(stu[1].marks, stu[1].name));
	state c= make_pair(stu[2].id, make_pair(stu[2].marks, stu[2].name));
	state d= make_pair(stu[3].id, make_pair(stu[3].marks, stu[3].name));
	vector<state> vs;
	vs.push_back(a);
	vs.push_back(b);
	vs.push_back(c);
	vs.push_back(d);

	for(int i=0; i<4; i++)
		printf("id: %d, makrs; %d, name: %s\n", vs[i].first, vs[i].second.first, (vs[i].second.second).c_str());
	printf("==============================\n");
	sort(vs.begin(), vs.end());
	for(int i=0; i<4; i++)
		printf("id: %d, makrs; %d, name: %s\n", vs[i].first, vs[i].second.first, (vs[i].second.second).c_str());
	return 0;
}

