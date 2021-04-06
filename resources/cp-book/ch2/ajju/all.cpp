#include<cstdio>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	map<string, int> mapper;
	map<string, int>::iterator it;
	mapper["sonam"]=100;
	mapper["ajay"]=100;
	mapper["virat"]=80;
	mapper["vijay"]=90;
	mapper["computer"]=80;
	mapper["pb"]=45;
	for(it=mapper.begin(); it!=mapper.end(); it++)
		printf("%s %d\n", (it->first).c_str(), it->second);

	vector<pair<string, int> > vec(all(mapper));
//	vec(all(mapper));
	for(int i=0; i<vec.size(); i++)
		printf("%d %s\n", vec[i].second, (vec[i].first).c_str());
	return 0;
}
											 
