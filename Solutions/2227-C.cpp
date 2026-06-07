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
    ll n;
    cin>>n;
    vl a(n) , b;
    for(int i = 0 ; i < n ; i++){
      cin>>a[i];
      if(a[i]%6==0) b.push_back(a[i]);
    }
    for(int i = 0 ; i < n ; i++)
    if(a[i]%2==0 && a[i]%6!=0) b.push_back(a[i]);
    for(int i = 0 ; i < n ; i++)
    if(a[i]%2!=0 && a[i]%3!=0) b.push_back(a[i]);
    for(int i = 0 ; i < n ; i++)
    if(a[i]%3==0 && a[i]%6!=0) b.push_back(a[i]);
 
    for(auto it : b)
    cout<<it<<" ";
    cout<<'\n';
  }
    return 0 ;
}
