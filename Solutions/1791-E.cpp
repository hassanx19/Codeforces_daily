#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
#define nl '\n'
/*
We can always make one element to be negative at the end of the operation(if no. of negatives are odd , if even then can be compensated)
and it is better to choose that number to be the least value then the sum would be maximum.
eg. [8 -9 3 4 -10 2] then we can make the array as [8 , 9 , 3, 4 , 10 , 2] the no of negatives here are even
eg. [-1 -2 -3 -4 -5] --> [-1 2 3 4 5] as the no of negatives are odd.
*/
int main() {
    FASTIO;
    ll array[31];
    array[0] = 1;
    for(int i = 1 ; i < 31; i++)
    array[i] = (1<<i);
    int t;
    cin>>t;
    while(t--){
    int n , neg = 0 ;
    cin>>n;
    vll a(n);
    ll mini = INT16_MAX , sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        sum+=abs(a[i]);
        if(a[i]<0) neg+=1;
        mini = min(mini , abs(a[i]));
    }
    if(neg&1) sum-=(2*mini); //2*mini because we have included mini in sum before also.
    cout<<sum<<nl;
    }
    return 0;
}