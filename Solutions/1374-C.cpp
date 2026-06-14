#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    unordered_map<char,int> m = { {'(',-1} , {')',1} };
    while(t--){
    int n , count = 0; 
    cin>>n;
    string s;
    cin>>s;
    stack<int> st;
    for(int i = 0 ; i < n ; i++){
        if(m[s[i]]<0) st.push(m[s[i]]);
        else{
            if(st.empty()) count++;
            else st.pop();
        }
    }cout<<count<<'\n';
    }
    return 0;
}
