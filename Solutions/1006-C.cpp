#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
/*
using two pointers we will calculate the prefix sum(sum1) and suffix sum(sum3) until we get sum1 = sum3 and would 
update it in max sum because we can divide that array up until those positions. If we do not get any sum equal then 
we can divide it as = {0} , (arr) , {0} so the max sum = 0.
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
    
    // }
    int n;
    cin>>n;
    vll d(n);
    for(int i = 0 ; i<n ; i++) cin>>d[i];
    ll s1 = d[0] , s3 = d[n-1], max_sum = 0 , l = 0 , r = n-1;
    while(l<r){
        if(s1>s3){
            r--;
            s3+=d[r];
        }else if(s1<s3){
            l++;
            s1+=d[l];
        }else{
            max_sum = max(max_sum , s1);
            l++;
            r--;
            s1+=d[l];
            s3+=d[r];
        }
    } 
    cout<<max_sum<<'\n';
 
    return 0;
}
