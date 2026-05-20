#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int gcd (int a , int b);
int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n , y , x;
    cin>>n;
    vi a(n);
    y = a[0];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        y = y ^ a[i];
    }
   if(n%2==0){
    if(y==0){
        x = y;
    } else x = -1;
   } else {
    x = y;
   }
   cout<<x<<endl;
}
    return 0;
}