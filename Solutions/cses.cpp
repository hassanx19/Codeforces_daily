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
  int n;
    cin>>n;
   vector<int> a(n);
   int sum = 0;
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    sum = sum + a[i];
   }
   if ( sum%2 == 0 ){
    cout<<"YES"<<endl;
   } else {
    cout<<"NO"<<endl;
   }
  }
    return 0 ;
}

