#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(int n){
	
	vector<int> cards(n), dp(n);
	for(int i = 0; i < n; i++) cin >> cards[i];

	int maxi = -INT_MAX;
	for(int i = 0; i < n; i++){
		dp[i] = cards[i];
		if(i > 0 && cards[i] != cards[i-1])
			dp[i] = max(dp[i], dp[i-1]+dp[i]);
		maxi = max(maxi,dp[i]);
	}
	cout << maxi << endl;
}

int main(){
	
	int t;
	while(cin >> t && t) solve(t);

	return 0;
}
