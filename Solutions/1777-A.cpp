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
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int  count = 0 ;
    for(int i = 0 ; i < n-1 ; i++){
        if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2!=0&&a[i+1]%2!=0)){
            a[i+1] = a[i]*a[i+1];
            count++;
        }
    }
    cout<<count<<endl;
}
    return 0 ;
}