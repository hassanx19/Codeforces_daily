#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   vi a(n);
   int sum = 0;
   for(int i = 0 ; i < n-1 ; i++){
    cin>>a[i];
    sum = sum + a[i];
   }
   cout<<sum*(-1)<<endl;
 
}
    return 0;
}
 
