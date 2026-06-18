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
    while(t--){
    ll n , k , sum , max_element;
    cin>>n>>k;
 
    if(n<=k){
        sum = (k/n) * n;
        if(sum==k) max_element = k/n;
        else max_element = (k/n)+1;
    }else {
        if(n%k==0) max_element = 1;
        else max_element = 2;
    }
    cout<<max_element<<'\n';
}
    return 0;
}
