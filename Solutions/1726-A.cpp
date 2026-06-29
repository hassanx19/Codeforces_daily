#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
void ccrot(vector<int> &a , int n , int d){
    // rotating an array clockwise in O(n);
    int temp;
    for(int i = n-1-d ; i >=0 ; i--){
    temp = a[i + d];
    a[i+d] = a[i];
    a[i] = temp;
}
}
void acrot(vector<int> &a , int n , int d){
    // rotating an array anti-clockwise in O(n);
    int temp;
for(int i = d ; i < n ; i++){
    temp = a[i - d];
    a[i-d] = a[i];
    a[i] = temp;
}
}
/*

*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;
   cin>>t;
   while(t--){
    int n , x , y;
   cin>>n;
   vi a(n);
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
   }
   int ans = a[n-1] - a[0];
   for(int i = 1 ; i< n ;i++){
    ans = max(ans , a[i]-a[0]);
   }
   for(int i = 0 ; i< n-1 ;i++){
    ans = max(ans , a[n-1]-a[i]);
   }
   for(int i = 0 ; i< n-1 ;i++){
    ans = max(ans , a[i]-a[i+1]);
   }
   cout<<ans<<endl;
}
    return 0;
}