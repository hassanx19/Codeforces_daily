#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 2e9+7;
#define F first
#define S second
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define loop(x) for(int i = 0 ; i < n ; i++)
#define nl '\n'
/*
 
*/
// A comparator function to custom sort a pair:
// bool cmp(pair<int,int> a , pair<int,int> b){
// if(a.first==b.first) return a.second<b.second; // sorted in inc order wrt to second element of the pair
// return a.first>b.first; // sorted in dec order wrt to first element of the pair
// }
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    ll n , w , x , h = 1;
    cin>>n>>x;
    vll a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    ll st = 0 , end = MOD , mid;
    while(st<=end){
        w = 0;
        mid = st + (end-st)/2;
        for(int i = 0 ; i < n ; i++){
           w+=max(mid-a[i],0LL);
        }
        if(w==x){
            h = mid;
            break;
        }else if(w>x) end = mid-1;
        else {
            st = mid+1;
            h = max(h,mid);
        }
    }
    cout<<h<<nl;
    }
    return 0;
}
