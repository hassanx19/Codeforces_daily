#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
 
*/
// A comparator function to custom sort a pair:
// bool cmp(pair<int,int> a , pair<int,int> b){
// if(a.first==b.first) return a.second<b.second; // sorted in inc order wrt to second element of the pair
// return a.first>b.first; // sorted in dec order wrt to first element of the pair
// }
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n%4==0) cout<<"Bob"<<'\n';
    else cout<<"Alice"<<'\n';
    }
    return 0;
}
