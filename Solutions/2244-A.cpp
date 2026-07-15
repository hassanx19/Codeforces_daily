#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef unsigned long long ull;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
 
*/
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n , len = 0 , maxi = 0;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0 ; i<n ; i++){
        if(s[i]=='#'){
            len++;
            maxi = max(len , maxi);
        }else len = 0;
    }
    if(maxi&1) maxi =(maxi/2)+1;
    else maxi/=2;
    cout<<maxi<<nl;
    }
    return 0;
}