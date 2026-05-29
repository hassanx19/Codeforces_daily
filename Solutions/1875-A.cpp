#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
void solve() {
    ll a, b, n;
    if (!(cin >> a >> b >> n)) return;
 
    ll total_time = b; 
 
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        total_time += min(x, a - 1);
    }
 
    cout << total_time << endl;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
