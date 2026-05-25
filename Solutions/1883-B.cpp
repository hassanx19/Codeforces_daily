#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
     int n , k , odd = 0;
     cin>>n>>k;
     string s;
     cin>>s;
     multiset<int> freq; // to store the frequency of elements
     sort(s.begin(),s.end());
     for(int i = 0 ; i < s.size();++i){
        int count = 1;
        while(i<s.size()-1 && s[i]==s[i+1]){ // loop calculated the frequency of each characters
            count++;
            i++;
        }
        freq.insert(count);
     }
     for(auto it = freq.begin(); it!=freq.end();++it){
        if((*it)%2!=0) odd++; // count of odd frequencies of characters 
     }
     if(k<n){
        if(odd<=1 || k>=odd-1) cout<<"YES"<<'\n';
        else cout<<"NO" <<'\n';
     }else cout<<"NO" <<'\n';
   }
    return 0;
}