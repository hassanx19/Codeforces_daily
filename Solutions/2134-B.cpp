#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
/*
The solution to the problem is that we have to add k to a[i] and lets say that is added p[i] times
so a[i] = a[i] + k*p[i] because we want a no. g>1 such that (a[i] + k*p[i])%g==0
for all i<=n and that can happen if we take g = k+1 and p[i] = (a[i]%(k+1))*k then the above condition 
will be satisfied and we can p[i]<=k for all i<=n and hence gcd = g > 1;
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n, k ;
    cin>>n>>k;
    vl a(n);
    for(ll i = 0 ; i < n ; i++){
      cin>>a[i];
      a[i]+=((a[i]%(k+1))*k);
    } 
    for(auto it : a) cout<<it<<" ";
    cout<<'\n';
    }  
    return 0;
}
