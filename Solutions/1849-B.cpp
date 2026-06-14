#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*

*/
bool cmp(pair<int,int> a , pair<int,int> b){
if(a.first==b.first) return a.second<b.second; // sorted in inc order wrt to second element of the pair
return a.first>b.first; // sorted in dec order wrt to first element of the pair
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n , k;
    cin>>n>>k;
    vll a(n);
    vector<pair<int,int>> v(n);
    for(ll i = 0; i<n ; i++){
        cin>>a[i];
        a[i]%=k;           // gives the remaining health;
        if(a[i]==0) a[i]=k;
        v[i].first = a[i];
        v[i].second = i+1;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v) cout<<it.second<<" ";
    cout<<'\n';
    }
    return 0;
}

