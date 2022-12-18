#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Two Permutation

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    if(a + b + 2 <= n or a + b == 2 * n) 
        cout << "Yes\n";
    else 
        cout << "No\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
