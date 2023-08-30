#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

ll sieve_size;
bitset<10000010> bs;
vector<int> primes;

void sieve(ll upperb){

	sieve_size = upperb + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for(ll i = 2; i <= sieve_size; i++)
		if (bs[i]){
			for(ll j = i*i; j <= sieve_size; j += i) bs[j] = 0;
			primes.push_back((int)i);
		}
}

vector<int> primeFactors(ll n){
	
	vector<int> factors;
	ll pf_idx = 0;
	ll pf = primes[pf_idx];
	while(pf*pf <= n) {
		while(n % pf == 0){
			n /= pf;
			factors.push_back(pf);
		}
		pf = primes[++pf_idx];
	}
	if (n != 1) factors.push_back(n);
	return factors;
	
}

void solve(int n){

	vector<int> factors = primeFactors(n);
	for(int i = 0; i < factors.size(); i++){
		if (i == 0) cout << factors[i];
		else cout << ' ' << factors[i];
	}
	cout << endl;

}

int main(){
	
	sieve(550);
	int n;
	while(cin >> n && n) solve(n);

	return 0;
}
