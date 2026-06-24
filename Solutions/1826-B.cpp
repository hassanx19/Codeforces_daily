#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
/*
If we can calculate the difference of all the pairs from the front and the last and then find the greatest 
common divisor (gcd) of all those elements then that would be the value of x;
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vll a(n) , x;
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    int i = 0 , j = n-1;
    while(i<j){
        x.push_back(abs(a[i]-a[j]));
        i++;
        j--;
    }
    sort(x.begin(),x.end());
    ll gcd = 0;
    for(int i = 0 ; i < x.size(); i++){
        if(x[i]!=0){
            if(gcd==0) gcd = x[i];
            else gcd = __gcd(gcd,x[i]);
        }
    }
    cout<<gcd<<'\n';
    }
    return 0;
}
