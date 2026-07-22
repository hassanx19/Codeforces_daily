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
    ll c;
    cin>>n>>c;
    vll s(n);
    for(int i = 0 ; i < n ; i++) cin>>s[i];
    sort(s.begin(),s.end());
    ll st = 1 , e = MOD , mid , w , sum = 0;
    while(st<=e){
        sum = 0;
        mid = st + (e-st)/2;
        for(int i = 0 ; i < n ; i++){
            sum+=((s[i]+(2*mid))*(s[i]+(2*mid)));
            if(sum>c) break;
        }
        if(sum>c) e = mid - 1;
        else if (sum<c) st = mid+1;
        else{
            w = mid;
            break;
        }
    }
    cout<<w<<nl;
    }
    return 0;
}