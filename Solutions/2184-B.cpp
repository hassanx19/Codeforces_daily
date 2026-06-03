#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const long long MOD = 1e9 + 7;
 
int main () {
  ios::sync_with_stdio(0);
  cin.tie(0); 
  int t;
  cin>>t;
  while(t--){
     ll s , k , m , time;
     cin>>s>>k>>m;
     if(k==m){
      if(s>k) time = k;
      else time = s;
     }else if(k>m){
      if(s>m) time = s - m;
      else time = 0;
     }else if(k<m) {
      if(s>k){
        if((m/k)%2==0) time = s - (m%k);
      else time = k - (m%k);
      } else time = s - (m%k);
      if(time<0) time = 0;
     }
     cout<<time<<'\n';
  }
    return 0 ;
}
