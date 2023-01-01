#include <iostream>
#include <vector>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	vector<int> p(n + 1);
	vector<ll int> ps(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		ps[i] = ps[i - 1] + (ll int)p[i];
	}

	int ans = 0;

	for (ll int i = 1; i <= n; i++) {
		ll int ssps = (((1) * (i + 1)) * i / 2);

		if (ps[i] == ssps) {
			ans++;
		}
	}

	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;

	for (;t--;) {
		solve();
	}
}