#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
 
*/
bool is_palindrome(string &str){
    string b = str;
    reverse(b.begin(),b.end());
    if(b==str) return 1;
    return 0;
}
int main() {
    FASTIO;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = false;
    if(is_palindrome(s)) flag = true;
    else{
    for(int i = 0 ; i < n ; i++){
        if(s[i]=='0'){
            while(i<n-1 && s[i]==s[i+1]){
                i++;
            }i++;
            if(s[i]=='1'){
            while(i<n-1 && s[i]==s[i+1]){
                i++;
            }i++;
            }
            if(s[i]=='0'){
                flag = true;
                break;
            }
        }else{
            while(i<n-1 && s[i]==s[i+1]){
                i++;
            }i++;
            if(s[i]=='0'){
            while(i<n-1 && s[i]==s[i+1]){
                i++;
            }i++;
            }
            if(s[i]=='1'){
                flag = true;
                break;
            }
        }
    }
    }
    if(flag) cout<<1<<nl;
    else cout<<2<<nl;
    }
    return 0;
}