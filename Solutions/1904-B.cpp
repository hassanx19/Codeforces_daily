#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*

*/
bool cmp(pair<ll,ll> a , pair<ll,ll> b){
    return a.second<b.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n , sum = 0;
    cin>>n;
    vector<pair<ll,ll>> a(n);
    vll b(n,0) , ans(n,0);
    ans[n-1] = n-1;
    vll pref(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i < n ; i++){
        sum+=a[i].first;
        pref[i] = sum;
    }
    // we will iterate from back and check if the pref sum of till ith index is greater then the next element of a or not
    // if the condition is true then we store the value of prev ans into the new ans[index] and if not then it can only
    // remove elements the coming before it hence its index will be the ansl
    for(int i = n-2 ; i>=0 ; i--){
        if(pref[i]>=a[i+1].first) ans[i] = ans[i+1];
        else ans[i] = i;
    }
    for(int i = 0 ; i < n ; i++) a[i].first = ans[i];
    sort(a.begin(),a.end(),cmp);
    for(auto it: a) cout<<it.first<<" ";
    cout<<'\n';
    }
    return 0;
}
