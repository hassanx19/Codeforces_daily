#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define loop(n) for(int i = 0 ; i < n ; i++)
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*

*/

int main() {
    FASTIO;
    int n;
    cin>>n;
    vll p(n);
    loop(n) cin>>p[i];
    ll cost = 0;
    sort(p.begin(),p.end());
    ll x = p[(n-1)/2];
    for(int i = 0 ; i < n ; i++)
    cost+=abs(p[i]-x);
    cout<<cost<<nl;
    return 0;
}
