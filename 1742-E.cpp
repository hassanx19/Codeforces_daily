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
    vi a(n);
    vector<pair<int , int>> k(q);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < q ; i++){
        cin>>k[i].first;
        k[i].second = i;
    }
    sort(k.begin(),k.end());
    vll b , ans(q);
    ll sum = 0; int i = 0 , j = 0;
    while(j<q){
        if(i<n){
            if(a[i]>k[j].first){
                j++;
                b.push_back(sum);
            }else{
                sum+=a[i];
                i++;
            }
        }else{
            b.push_back(sum);
            j++;
        }
    }
    for(int i = 0 ; i < q ; i++) ans[k[i].second] = b[i];
    for(auto it : ans) cout<<it<<" ";
    cout<<nl;
    }
    return 0;
}
