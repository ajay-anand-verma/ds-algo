#include<cstdio>
#include<map>
#include<set>
#include<string>
using namespace std;

int main(){
	map<string, int> mapper;
	set<int> used_value;

	int value;
	char name[30];
	
	mapper["john"]=78; used_value.insert(78);
	mapper["billy"]=69; used_value.insert(69);
	mapper["andy"]=80; used_value.insert(80);
	mapper["steven"]=77; used_value.insert(77);
	mapper["feliz"]=82; used_value.insert(82);
	mapper["grace"]=75; used_value.insert(75);
	mapper["martin"]= 81; used_value.insert(81);
//	mapper["m"]=83; used_value.insert(83);

	for(map<string, int>::iterator it=mapper.begin(); it!=mapper.end(); it++)
		printf("%s %d\n", (it->first).c_str(), it->second);
	
	printf("=============================\n");
	for(map<string, int>::iterator it=mapper.lower_bound("f"); it!=mapper.upper_bound("m"); it++)
		printf("%s %d\n", (it->first).c_str(), it->second);


	for(set<int>::iterator it=used_value.lower_bound(75); it!=used_value.upper_bound(81); it++)
		printf("%d ", *it);
	printf("\n");
	return 0;

}

