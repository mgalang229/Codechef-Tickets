#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	string s;
	cin >> s;
	if(s[0]==s[1]) {
		cout << "NO\n";
		return;
	}
	bool ok=1;
	for(int i=0; i+2<s.size(); ++i) { 
		if(s[i]!=s[i+2]) {
			ok=0;
			break;
		}
	}
	cout << (ok ? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=0; i<t; ++i) 
		solve();
}
