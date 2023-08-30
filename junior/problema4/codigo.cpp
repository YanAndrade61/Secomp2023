#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(string line){

	for(char c: line) cout << (char)(c-7);
	cout << endl;
}

int main(){
	
	string line;
	while(getline(cin,line)) solve(line);

	return 0;
}
