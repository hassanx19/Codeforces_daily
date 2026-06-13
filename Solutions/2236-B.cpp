#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
/*
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        bool flag = false;
        string s;
        cin>>s;
        for(ll i = 0 ; i < n-k ; i++){
            if(s[i]=='1' && s[i+k]=='1'){
                s[i] = '0';
                s[i+k] = '0';
            }
            else if(s[i]=='1' && s[i+k]=='0'){
                s[i] = '0';
                s[i+k] = '1';
            }
        }
        for(ll i = 0 ; i < n ; i++){
            if(s[i]=='1'){
                flag = true;
                break;
            }
        }
        if(flag) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
 
    }
    return 0;
}
