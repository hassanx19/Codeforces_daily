#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const long long MOD = 1e9 + 7;
// solving this question using vectors 
int main () {
  ios::sync_with_stdio(0);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int n ,count = 0;
    cin>>n;
    vi a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < n-1; i++){
      for(int j = i+1 ; j < n ; j++)
      if(a[i]>a[j] && a[j]!=0){
        a[j] = 0;
        count++;
      }
    }
    cout<<count<<'\n';
 
  }
    return 0 ;
}
