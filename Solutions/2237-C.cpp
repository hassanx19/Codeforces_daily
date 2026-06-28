#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
/*
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vll a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        if (ans > a[i]) {
            ans += a[i];
        } else {
            ans = a[i];
        }
    }
    cout << ans << '\n';
    }
    return 0;
}
