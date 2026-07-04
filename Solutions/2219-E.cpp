#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
We can observe that after selecting any element , at last we are left with the xorr of only two elements of the array.
So the max of xor of every possible two elements of the array will be the maximum element that will be left at the end.
*/

int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vll a(n);
        ll maxi = INT64_MIN;
        for(int i = 0 ; i < n ; i++) cin>>a[i];
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j<n ; j++){
                maxi = max(maxi , (a[i]^a[j]));
            }
        }
        cout<<maxi<<nl;
    }
    
    return 0;
}