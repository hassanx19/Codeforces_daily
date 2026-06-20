#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
A shorter and simpler version of the code where we used two pointers and sliding window techniques to check for 
the max sum across all the subarrays that is possible. We start with the first two elements , check their parity
and if they differ along with the sum that we set to the current element initially is >=0 then  we add the next
element becuase if the current element is negative then the sum would be negative and adding next element would only
decrease the sum hence everytime we have to check that the sum>=0 and also everytime we are also checking if max between
the prev max sum and the curr and next element just in case.
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
    int l = 0 , r = 1 , max_sum = a[l] , curr = a[l] , sum = a[l] , next;
    while(l<n-1){
        if(r<n) next = a[r];
        max_sum = max(max_sum , curr);
        max_sum = max(max_sum , next);
        if((abs(curr)%2)!=(abs(next)%2)){
            if(sum>=0 && r<n){
                r++;
                sum+=next;
                max_sum = max(max_sum , sum);
                curr = next;
            }else {
                l = r;
                r = l+1;
                sum = a[l];
                curr = a[l];
            }
        }else {
            l = r;
            r = l+1;
            sum = a[l];
            curr = a[l];
        }
    }
    cout<<max_sum<<'\n';
    }
    return 0;
}
