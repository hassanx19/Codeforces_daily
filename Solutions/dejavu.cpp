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
    int n,q;
    cin>>n>>q;
    vll a(n);
    vi x(q);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < q ; i++) cin>>x[i];
    int prev = 31;
    // if any a[i]%(2^x[j])==0 then it wont be div by any y>=x[j]
    for(int i = 0 ; i < q ; i++){
        if(x[i]<prev){
            ll val = (1<<x[i]);
            for(int j = 0 ; j < n ; j++){
                if(a[j]%val==0){
                    ll up = (1<<(x[i]-1));
                    a[j]+=up;
                }
            }
            prev = x[i]; // any x[i]<prev value will divide the elements of the array a;
        }
    }
    for(auto it : a) cout<<it<<" ";
    cout<<nl;
    }
    return 0;
}