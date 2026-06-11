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
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    
    if(n&1){
      cout<<4<<'\n';
      cout<<1<<" "<<n<<'\n';
      cout<<1<<" "<<n-1<<'\n';
      cout<<n-1<<" "<<n<<'\n';
       cout<<n-1<<" "<<n<<'\n';
    }else{
      cout<<2<<'\n';
      cout<<1<<" "<<n<<'\n';
      cout<<1<<" "<<n<<'\n';
    }
    }
    return 0;
}
