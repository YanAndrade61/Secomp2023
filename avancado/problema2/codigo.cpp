#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(){
	
	map<char,float> tab;
	tab['C'] = 12.01; tab['H'] = 1.008;
	tab['O'] = 16.00; tab['N'] = 14.01;
	
	string mols; cin >> mols;
	float ans = 0;
	int n = mols.size();
	for(int i = 0; i < n;){
		char ele = mols[i]; 
		i++;
		
		string num = "";
		while(isdigit(mols[i]))
			num += mols[i], i++;
		if(num == "") num = "1";

		ans += (tab[ele] * stoi(num));
	}
	cout << fixed << setprecision(3);
	cout << ans << endl;
}

int main(){

	int t; cin >> t;
	while(t--) solve();

	return 0;
}
