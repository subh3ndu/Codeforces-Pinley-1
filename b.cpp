#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// Elimination of a Ring

void solve() {
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        s.insert(x);
    }

    if(s.size() == 2) 
        cout << n / 2 + 1 << "\n";
    else 
        cout << n << "\n";
}  

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) 
        solve();

    return 0;
}
