#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int q;
	cin >> q;
	for(; q; --q) {
		int n, a, mx=0;
		cin >> n;
		map<int, int> mp;
		for(int i=0; i<n; ++i) {
			cin >> a;
			mp[a]++;
		}
		for(auto x : mp)
			mx=max(mx, x.second);
		cout << n-mx << "\n";
	}
}
