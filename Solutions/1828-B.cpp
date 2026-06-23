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
        ll n ;
        cin>>n;
        vi p(n);
        for(int i = 0 ; i < n ; i++){
            cin>>p[i];
        }int k = 0;
        for(int i = 0 ; i < n ; i++){
            k = __gcd(k,abs(p[i]-(i+1)));
        }
        cout<<k<<endl;
    }
 
    return 0;
}
