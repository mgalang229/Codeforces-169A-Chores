#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	// sort the vector in non-increasing order
	sort(v.rbegin(), v.rend());
	// create an 'index' variable to store the index of the last element
	// that belongs to Petya
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (a > 0) {
			// store the index 'i' in the 'index' variable
			index = i;
			// decrement 'a'
			a--;
		}
	}
	int cnt = 0;
	for (int i = v[index] - 1; i >= v[index + 1]; i--) {
		// count the number of the values between the (last element of Petya - 1)
		// and the first element of Vasya (inclusive)
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
