#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef unsigned long long ull;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
 
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vll a(n);
    bool flag = true;
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < n-1 ; i++){
        ll s = a[i];
        if(s>i+1){
            a[i] = i+1;
            a[i+1] = s - a[i] + a[i+1];
        }
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i]>=a[i+1]){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    return 0;
}