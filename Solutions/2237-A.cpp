#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
 
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    int i = 0 , j;
    while(i<n){
        j = i+1;
        while(j<n){
            if(a[j]>a[i]){
                a[j] = a[i];
                break;
            }
            j++;
        }
        i++;
    }
    cout<<accumulate(a.begin(),a.end(),0)<<'\n';
    }
    
    return 0;
}
