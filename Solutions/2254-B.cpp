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
    int t;
    cin>>t;
    while(t--){
        int n , cnt = 0;
        cin>>n;
        string s;
        cin>>s;
        for(int i = 0 ; i < n ; i++){
            while(i<n-1 && s[i]==s[i+1]) i++;
            cnt++;
        }
        int mn = cnt;
        for(int i = 0 ; i<n ; i++){
            int freq = 1;
            while(i<n-1 && s[i]==s[i+1]){
                freq++;
                i++;
            }
            if(cnt>1){
                if(i>0 && i<n-1 && freq==1){
                    if( s[i+1]==s[i-1]) mn = min(cnt-2,mn);
                    else mn = min(cnt-1,mn);
                }
            }
        }
        cout<<mn<<nl;
    }
    return 0 ;
}
