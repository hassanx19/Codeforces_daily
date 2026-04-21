#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
The key idea in this problem is to take the median element from the last so that it would be maximum and the remaining from the front 
this way using two pointers approach we can calculate the max sum of medains optimally.
*/
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
       ll n , k ;
       cin>>n>>k;
       ll size = n*k;
       vi a(size);
       for(int i = 0 ; i < size ; i++){
        cin>>a[i];
       }
       ll i = 0 , x = n/2, med = n*k - 1 - x , sum = 0;
       while(i<=med){
        sum = sum + a[med];
        med = med - x - 1;
        i = i + n - x - 1;
       }
       cout<<sum<<'\n';
    }
     
    return 0;
}
