#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

typedef struct{
	int ts;
	int marks;
	string name;
} student;
	
bool cmp(student a, student b){
	if (a.ts!=b.ts)
		return a.ts<b.ts;
	else if(a.marks!=b.marks)
		return a.marks>b.marks;
	else
		return a.name<b.name;
}

int main(){
	freopen("data", "r", stdin);
	freopen("sorted_data", "w", stdout);
	int N;
	scanf("%d", &N);
	vector<student> sts;
	while(N--){
		student s;
		scanf("%d %d", &s.ts, &s.marks);		
		cin>>s.name;
		sts.push_back(s);
	}
	sort(sts.begin(), sts.end(), cmp);
	for(int i=0; i<sts.size(); i++)
		printf("%d %d %s\n", sts[i].ts, sts[i].marks, (sts[i].name).c_str());
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
