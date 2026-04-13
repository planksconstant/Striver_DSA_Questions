#include <bits/stdc++.h>

// Question-https://codeforces.com/contest/2217/problem/A
using namespace std;

/**
 * author: planksconstant6.6
 */

#define int long long
#define endl '\n'

void solve() {
  int n, k;
  cin >> n >> k;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int elem;
    cin >> elem;
    sum += elem;
  }
  string result = "";
  if (sum % 2 != 0) {
    result = "YES";
  } else if ((n * k) % 2 == 0) {
    result = "YES";
  }
  if (result != "YES") {
    result = "NO";
  }
  cout << result << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
