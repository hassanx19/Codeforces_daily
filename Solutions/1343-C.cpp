#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
/*
We need the sum of the longest alternating subsequence to be maximum so for every sequence of positive elements
we consider the max positive element in that sequence and similarly we consider the max negative element in the sequence
and this way we will have the max sum for the longest subsequence possible for the array.
eg. -2 -4 -1 2 9 -1 3 -4 -4 then the possible subsequence with the max sum is : {-1 9 -1 3 -4} =  6 (ans)
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vll a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    ll sum = 0 , i = 0 , prev = INT64_MIN , pos = 0 , cnt = 0;
    while(i<n){
        if(a[i]<0){
            prev = max(prev , a[i]);
            if(cnt==0){ // cnt = 0 indicates a sequence of positive elements 
                sum+=pos;
                pos = 0;
                cnt = 1;
            }
        }else{
            pos = max(pos , a[i]);
            if(cnt==1){ // cnt = 1 indicates a sequence of negative elements (before or after any seq of pos elements)
                sum+=prev;
                prev = INT64_MIN;
                cnt = 0;
            }
        }
        i++;
    }
    if(pos!=0) sum+=pos;
    if(prev!=INT64_MIN) sum+=prev;
    cout<<sum<<'\n';
    }
 
    return 0;
}
