#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
According to this solution if we are able to find all the factors of n then we will be able to divide the boxes equally
in each truck and for all possible values of k, we will calculate the max and min of weights that can be loaded on the truck.
max_diff calculate the max difference of all differences of lmax and lmin which will be our final answer.
*/
 
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vll a(n);
    vi k;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        if((n%(i+1))==0) k.push_back(i+1); //all factors of k
    }
    int st = 0; 
    ll max_diff = INT64_MIN;// max_diff = max absolute difference for all possible values of k
    while(st<k.size()){
        int size, i = 0 , j = 0;
        ll lmax = INT64_MIN, lmin = INT64_MAX;
        while(i<n){
            ll sum = 0;
            size = k[st];
            while(size--){
                sum+=a[j];
                j++;
            }i = j;
            lmax = max(lmax,sum);
            lmin = min(lmin,sum);
        }
        max_diff = max(max_diff , abs(lmax-lmin));
        st++;
    }
    cout<<max_diff<<nl;
    } 
    return 0;
}
