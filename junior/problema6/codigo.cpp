#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(int n){

	map<int,int> idx;
	vector<int> vec(n+1);
	
	for(int i = 1; i <= n; i++){vec[i] = i; idx[i] = i;}

	int r; cin >> r;
	for(int i = 0; i < r; i++){
		int l, r; cin >> l >> r;
		while(l < r){
			idx[vec[l]] = r;
			idx[vec[r]] = l;
			swap(vec[l], vec[r]);
			l++; r--;
		}
	}
	int q; cin >> q;
	for(int i = 0; i < q; i++){
		int j; cin >> j;
		cout << idx[j] << endl;
	}
}

int main(){
	
	int n, test = 1;
	while(cin >> n && n){ 
		cout << "Genome " << test++ << endl;
		solve(n);
	}

	return 0;
}
