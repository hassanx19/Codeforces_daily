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
    ll size = (n*(n-1))/2;
    vll a,b(size);
    map<ll,ll> mp; //maps the elements with their count;
    for(ll i = 0 ; i < size ; i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    auto it = mp.begin();
    while(a.size()<n){
        // continue to push the elements untile their count is reduced to zero.
        while(it->second>0){
            a.push_back(it->first);
            int i = a.end()-a.begin()-1;
            it->second-=(n-i-1);
        }
        it++;
        // if the it has reached to end and a has not all elements filled yet then we can fill those positions with last elements
        if(it==mp.end()&&a.size()<n){
            it--;
            a.push_back(it->first);
        }
    }
    for(auto xt : a) cout<<xt<<" ";
    cout<<nl;
    }
    return 0;
}
