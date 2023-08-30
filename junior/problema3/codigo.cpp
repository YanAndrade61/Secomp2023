#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n,m;

void solve(){
	int ans = max(n,m)-1;
	ans += max(n,m)*(min(n,m)-1);
	cout << ans << endl;
}

int main(){

	while(cin >> n >> m) solve();

	return 0;
}
