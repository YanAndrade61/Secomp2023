#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){

	map<int,string> setor;
	setor[1] = "Rolien";
	setor[2] = "Naej";
	setor[3] = "Elehcim";
	setor[4] = "Odranoel";

	int n; cin >> n;
	while(n--){
		int k; cin >> k;
		cout << setor[k] << endl;
	}
}

int main(){

	int n; cin >> n;
	while(n--) solve();

	return 0;
}
