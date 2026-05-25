#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n , k , x;
        cin>>n>>k>>x;
        ll min = (k*k + k) / 2;
        ll max = (n*n + n) / 2  - ((n-k) * (n-k+1)) / 2;
        if(x >= min && x <= max){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
 
    }
 
    return 0;
}