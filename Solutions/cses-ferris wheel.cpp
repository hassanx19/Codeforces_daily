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
    int n;
    ll x;
    cin>>n>>x;
    vll p(n);
    for(int i = 0 ; i < n ; i++) cin>>p[i];
    sort(p.begin(),p.end());
    int i = 0 , j = n-1 , cnt = 0 ;
    while(i<=j){
        if(p[i]+p[j]>x){
            cnt++;
            j--;
        }else{
            cnt++;
            i++;
            j--;
        }
    }
    cout<<cnt<<nl;
    return 0 ;
}
