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
    ll n , l , r , x;
    cin>>n>>l>>r;
    vll a;
    x = l;
    int y = 1;
    while(a.size()!=n){
        if(x%y==0){
            a.push_back(x);
            y++;
        }else{
            ll next = x - (x%y) + y; //the next smaller element from x which is divisble by y such that gcd is y
            if(next>=l && next<=r){
                a.push_back(next);
                y++;
            }else break;
        }
    }
    if(a.size()!=n) cout<<"NO"<<nl;
    else{
        cout<<"YES"<<nl;
        for(auto it : a) cout<<it<<" ";
        cout<<nl;
    }
    }
    return 0;
}
