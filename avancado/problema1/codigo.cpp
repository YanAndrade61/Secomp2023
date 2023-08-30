#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

void solve(){

	int a, b; cin >> a >> b;
	string symbols;
	getline(cin,symbols); //Retira o \n da primeira linha
	getline(cin,symbols);

	for(char c: symbols){
		if(c == ' ' || c == '\n')continue;
		int mid = (a+b)/2;
		if(c == '<') b = mid-1;
		if(c == '>') a = mid+1;
		if(c == '=') {cout << mid << endl; break;}
	}
}

int main(){
	
	int t; cin >> t;
	while(t--)
		solve();

	return 0;
}
