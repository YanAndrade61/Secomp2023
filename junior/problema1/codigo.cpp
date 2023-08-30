#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){
	
	map<int,int> digits;
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		int aux = i;
		while(aux > 0){ 
			digits[aux%10]++; 
			aux /= 10;
		}
	}
	for(int i = 0; i < 10; i++){
		if(i != 0) cout << " ";
		cout << digits[i];
	}
	cout << endl;
}

int main(){
	
	int n; cin >> n;
	while(n--) solve();

	return 0;
}
