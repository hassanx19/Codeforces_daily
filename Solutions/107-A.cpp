#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
const long long MOD = 1e9 + 7;

int main () {
  ios::sync_with_stdio(0);
  cin.tie(0); 
//   int t;
//   cin>>t;
//   while(t--){
   
//   }
int n, k, l, c, d, p, nl, np , mini ;
cin>>n>> k>> l>> c>> d>> p>> nl>>np,
mini = min((k*l)/nl , c*d);
mini = min(mini , p/np);
cout<<mini/n<<endl;

    return 0 ;
}
