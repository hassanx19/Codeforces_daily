#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
reimu will catch remiela after k operations and will try to move in the direction (C.W / A.C.W) where
the difference between them is largest and it is only after k operation that she will be caught.
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n , k , x1 , x2 , time , rel_pos , max_time;
        cin>>n>>x1>>x2>>k;
        rel_pos = abs(x2-x1);
        max_time = k + min(rel_pos , n-rel_pos);
        if(n>4){
        if(abs(n-rel_pos - rel_pos) > 1) time = max_time;
        else {
            if(k%2==0) time = max_time;
            else {
                time = k + max(rel_pos , n - rel_pos) - 2;
                time = max(time , max_time);
            }
        }
    } else{
        time = min(rel_pos , n - rel_pos);
        if(n==4) time = max_time;
    }
        cout<<time<<'\n';
    }
    
    return 0;

}
