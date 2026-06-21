#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
After n-1 operations we are left with the difference of any two elements of the array so if we are able to find 
any two elements such that the difference of those is equal to k that means we can do some operations and can get 
k . Hence we can use two pointers to find the difference - first we sort the array and then one pointer at the beginning
and the other one ahead of it and then we will check if a[i] + k < a[j] or = a[j] or > a[j] then manually update the pointer
based on that . if we ever find = a[j] we break else we continue finding it.
*/
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    ll n , k ; 
    cin>>n>>k;
    vll a(n) , b;
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    sort(a.begin(),a.end());
    int i = 0 , j = 1; bool flag = false;
    while(i<n && j<n){
        if(a[i]+k==a[j]){
            flag = true;
            break;
        }else if(a[i]+k<a[j]) i++;
        else j++;
        
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    }
    return 0;
}
