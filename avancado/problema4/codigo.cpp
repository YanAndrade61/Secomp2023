#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){

	stack<char> st;
	string input; cin >> input;
	for(char c: input){
		
		if(c == '{' || c == '[' || c == '(') st.push(c);
		else if((c == '}' && st.top() == '{') ||
		   (c == ']' && st.top() == '[') ||
		   (c == ')' && st.top() == '(')) st.pop();
		else break;
	}
	st.empty() ? cout << "Seguro!" : cout << "Armadilha!";
	cout << endl;
}

int main(){
	
	int t; cin >> t;
	while(t--) solve();

	return 0;
}
