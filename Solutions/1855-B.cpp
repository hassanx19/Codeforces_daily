#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define loop(x) for(int i = 0 ; i < n ; i++)
#define nl '\n'
/*
 
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    int i=1;
    while(n%i==0){
        i++;
    }
    cout<<i-1<<nl;
    }
    return 0;
}
