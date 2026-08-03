#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define cin(v) for(auto &val:v) cin >> val;
#define nl '\n'
typedef unsigned long long ull;
/*
 
*/
 
int main () {
    FASTIO
    int n ,m;
    ll k;
    cin>>n>>m>>k;
    vll a(n),b(m);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < m ; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0 , j = 0,cnt = 0;
    while(i<n && j<m){
        if(b[j]>=a[i]-k && b[j]<=a[i]+k){
            cnt++;
            i++;
            j++;
        }else if(b[j]>a[i]+k) i++;
        else if(b[j]<a[i]-k) j++;
    }
    cout<<cnt<<nl;
    return 0 ;
}
