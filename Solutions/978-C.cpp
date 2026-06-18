#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
For every b[p] we need to check if it fits into the window of a[i] or not if it does then we can find out the
room of the dorm a[i] by b[p]-i+1 for any letter b[p] and also print the dorm_no which we intitated with 1 as 
the first letter might belong to the dorm 1 and if any letter does not belong to that dorm then it would surely
belong to the letter of the dorm coming after that as the letters are arranged in ascending order;
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    // }
    ll n , m , y , pos, dorm_no = 1;
    cin>>n>>m;
    vll a(n),b(m);
    for(ll i = 0 ; i < n ; i++) cin>>a[i];
    for(ll i = 0 ; i < m ; i++) cin>>b[i];
    ll p = 0 , i = 1 , j = a[0] , q = 1;
    while(p<m){
        if(b[p]>=i && b[p]<=j){
            cout<<dorm_no<<" "<<b[p]-i+1<<'\n';
            p++;
        }else {
            i+=a[q-1];
            j+=a[q];
            q++;
            dorm_no++;
        }
    }
    return 0;
}
