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
In a palindrome we can check the mex and then we can move onto calculate tthe mex of the next palindrome which will
not intersect with any of the prev palindromes as the no. of occurences of all the numbers is 2 and since in a palindrome 
we can have at max 2 freq for a given character so it will not occur anywhere else in the next palindrome. 
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    ll exp = 0 , sum = 0;
    vi a(n),b(n);
    int mx = 0;
    for(int i = 0 ; i<n ; i++) cin>>a[i];
    for(int i = 0 ; i<n ; i++) cin>>b[i];
    for(int i = 0 ; i<min(n,k) ; i++){
        sum+=a[i];
        mx = max(mx, b[i]);
        exp = max(sum+((k-i-1)*mx) , exp);
    }
    cout<<exp<<nl;
    }
    return 0;
}