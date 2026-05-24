#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 
int main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int n , a , b;
    cin>>n>>a>>b;
    if(a+b+2<=n || (a==b&&a==n)){
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
 
  }
    return 0 ;
}