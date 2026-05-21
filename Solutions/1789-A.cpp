#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
If we are able to find any two elements whosse gcd is less than equal to 2 then we can always rearrange those 
elements in front so that the gcd of the prefixes would always be <=2; so gcd == 1 || gcd == 2 --> YES else NO.
*/
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vi a(n);
     for(int i = 0 ; i < n ; i++){
        cin>>a[i];
     }
     bool flag = false;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(__gcd(a[i],a[j])<=2){
                flag = true;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
 
    return 0;
}