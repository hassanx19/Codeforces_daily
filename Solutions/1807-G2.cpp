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
    int n;
    cin>>n;
    vi c(n);
    for(int i = 0 ; i < n ; i++) cin>>c[i];
    sort(c.begin(),c.end());
    bool flag = true;
    ll sum = 1;
    for(int i = 1 ; i < n ; i++){
        if(sum<c[i]){
            flag = false;
            break;
        }else sum+=c[i];
    }
    if(n==1){
        if(c[0]>1) flag = false;
    }
    if(flag) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    }
    return 0;
}
