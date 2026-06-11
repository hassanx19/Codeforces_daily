#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
/*
 
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n, x , count = 0;
    cin>>n>>x;
    vl a(n);
    for(ll i = 0 ; i < n ; i++) cin>>a[i];
    ll j = 1;
    ll l_prev = a[0]-x ,r_prev = a[0]+x , l_curr,r_curr,l_common,r_common;
    while(j<n){
        l_curr = a[j]-x;
        r_curr = a[j]+x;
        l_common = max(l_curr , l_prev);
        r_common = min(r_curr , r_prev);
        if(l_common>r_common){
            count++;
            l_prev = l_curr;
            r_prev = r_curr;
            j++;
        }else{
            j++;
            l_prev = l_common;
            r_prev = r_common;
        }
    }
    cout<<count<<'\n';
    }
    return 0;
}
