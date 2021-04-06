#include<cstdio>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

#define isSet(S, i) (S & (1<<i))
#define setBit(S, i) (S |= (1<<i))
#define clearBit(S, i) (S &= ~(1<<i))
#define toggleBit(S,i) (S ^= (1<<i))
#define lowBit(S) (S &(-S)) // check the first bit from right is on [ in the powers of 2]
#define setAll(S, n) (S = (i<<n)-1)


void printSet(int vs){
	printf("S = %2d = ", vs);
	stack<int> st;
	while(vs)
		st.push(vs%2), vs/=2;
	while(!st.empty())
		printf("%d", st.top()), st.pop();
	printf("\n");
}

int main(){
	int s;
	scanf("%d", &s);
	printSet(s);
	
	printf("%d\n",lowBit(s)); 
	return 0;
}	
