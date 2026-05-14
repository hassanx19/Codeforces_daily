#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
      ll n , k , q , days = 0;
      cin>>n>>k>>q;
      vector<ll> a(n);
      for(int i = 0 ; i < n ; i++){
        cin>>a[i];
      }
   for(int i = 0 ; i < n ; i++){
        ll count = 0 , x = 0;
        while(i<n && a[i]<=q){
          count++;
          x = count - k + 2;
          i++;
        }
        if(count>=k) days = days  + (x*x - x)/2;
      }
      cout<<days<<'\n';
   }
    return 0;
}
