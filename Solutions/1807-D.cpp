#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
void solve (){
  int n , q;
  cin>>n>>q;
  vector<ll> a(n+1);
  vector<ll> pref(n+1 , 0);
  pref[0] = 0;
  for(int i = 1 ; i <= n ; i++){
    cin>>a[i];
    pref[i] = pref[i-1] + a[i];
  }
  while(q--){
      int l , r , k;
      cin>>l>>r>>k;
      if(((pref[n] - pref[r] + pref[l-1])&1) && (((r-l+1)%2==0) || (k%2==0))) cout<<"YES"<<endl;
      else if (((pref[n] - pref[r] + pref[l-1])%2==0) && ((r-l+1)%2!=0) && (k%2!=0)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
int main () {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
    return 0 ;
}
