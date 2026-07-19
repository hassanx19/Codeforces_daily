#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
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
    vll a(n),fp,fq;
    bool flag = true;
    for(int i = 0 ; i<n ; i++) cin>>a[i];
    ll p = a[0] , q = a[1];
    for(int i = 0 ; i < n ; i++){
        if(i&1) q = __gcd(q,a[i]); // gcds of all elements at even index
        else p = __gcd(p,a[i]); // gcds of all elements at odd index
    }
    // we need to check if p and q divides the elementss at odd / even pos respectively.
    /*
    If we select p(or factors of p) such that a1,a3,a5,.. = 0 then we need to check if any factors of p
    is not dividing a2,a4,a6,.. so we can select p itself and start to check if it divides any of these 
    numbers because if p divides any of these numbers then it factors will divide that no. too , hence we 
    cannot obtain a good array and the same thing works for q as well.
    */
    for(int i = 0 ; i < n ; i+=2){
        if(a[i]%q==0){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<q<<nl;
    }else{
        flag = true;
        for(int i = 1 ; i < n ; i+=2){
        if(a[i]%p==0){
            flag = false;
            break;
        }
    }
        if(flag) cout<<p<<nl;
        else cout<<0<<nl;
    }
    
    
    }
    return 0;
}