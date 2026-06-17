#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*

*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n , k , sum = 0;
    cin>>n>>k;
    vll a(n);
    for(ll i = 0 ; i < n ; i++)  cin>>a[i];
    sort(a.begin(),a.end());
    for(ll i = 0 ; i < n-k ; i++) sum+=a[i];
    ll i = 0 , end = n-k-1 , j , max_total = sum , it = 2*k - k + 1;
    while(i<n && it){
        j = i+end;
        if(j<n-1) sum = sum-a[i]-a[i+1]+a[j+1];
        max_total = max(max_total,sum);
        i+=2; it--;
        end--;
    }
    cout<<max_total<<'\n';
    }
    return 0;
}
