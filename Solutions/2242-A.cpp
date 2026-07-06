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
    int k;
    cin>>k;
    vi c(k);
    bool flag = false;
    for(int i = 0 ; i<k ; i++) cin>>c[i];
    sort(c.begin(),c.end());
    for(int i = 0 ; i < k ; i++){
        if(c[i]>=3 || (i<k-1 && c[i]>=2 && c[i+1]>=2)){
            flag = true;
            break;
        }
    }
    cout<<(flag? "YES" : "NO")<<nl;
    }
    return 0;
}
