#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve(string line){

	int n = 0;
	char ult;
	for(char c: line){
		if(isdigit(c)) n += (c - '0');
		else if(c == '!') cout << endl;
		else{
			if(c == 'b') c = ' ';
			while(n--) cout << c;
			n = 0;
		}
		ult = c;
	}
	if(ult != '!') cout << endl;
}

int main(){
	
	string line;
	while(getline(cin,line)){
		if(line.size() < 1) cout << endl;
		else solve(line);
	}

}
