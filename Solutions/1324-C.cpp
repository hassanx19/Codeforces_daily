#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
/*
We just need to find the max distance between the two consecutive R's and the (first R and 0 ) and the (last R and n+1);
The max of all distance is our ans;
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int i = 0 , j = 0 , maxi = 0;
        while(j<n){
            if(s[j]=='R'){
                if(maxi==0)
                maxi = max(j-i+1, maxi);
                else maxi = max(j-i , maxi);
                i = j;
                j++;
            }else  j++;
        }
        if(maxi==0)
        maxi = max(maxi , j-i+1);
        else maxi = max(maxi , j-i);
        cout<<maxi<<'\n';
    }
    
    return 0;
}
