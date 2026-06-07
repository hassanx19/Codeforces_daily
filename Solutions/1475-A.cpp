#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const long long MOD = 1e9 + 7;
int main () {
  ios::sync_with_stdio(0);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool flag = false;
    int x = n , y = n;
    while(x>=0 && y>=0){
      if((x>=0 && x%2020==0) || (y>=0 && y%2021==0)){
       flag = true;
        break;
      }
    else{
      x-=2021;
      y-=2020;
    }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
    return 0 ;
}#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
const long long MOD = 1e9 + 7;
int main () {
  ios::sync_with_stdio(0);
  cin.tie(nullptr); 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    bool flag = false;
    int x = n , y = n;
    while(x>=0 && y>=0){
      if((x>=0 && x%2020==0) || (y>=0 && y%2021==0)){
       flag = true;
        break;
      }
    else{
      x-=2021;
      y-=2020;
    }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
  }
    return 0 ;
}
