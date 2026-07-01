#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
    int x , y;
    cin>>x>>y;
    if(x%y==0) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    return 0;
}