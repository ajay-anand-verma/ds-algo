#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main(){
	stack<char> s;
	queue<char> q;
	deque<char> d;

	printf("%d\n", s.empty());
	printf("=======================\n");
	s.push('a');
	s.push('b');
	s.push('c');

	printf("%c\n", s.top());
	s.pop();
	printf("%c\n", s.top());


	return 0;
}

