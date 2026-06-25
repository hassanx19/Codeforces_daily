#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const long long MOD = 1e9 + 7;
/*
 
*/
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // int t;
    // cin>>t;
    // while(t--){
    
    // }
    int   cnt = 0; //cnt to store the number of elements with odd occurences
    string s , a , b;
    cin>>s;
    map<char,int> freq;
    for(int i = 0 ; i < s.size() ; i++){
        freq[s[i]]++;
    }
    
    for(auto it : freq){
        if((it.second%2)!=0) cnt+=1;
        if(cnt>1) break;
    }
    if(cnt>1) cout<<"NO SOLUTION"<<'\n';
    else{
        int count = 0;
        char elem;
        bool flag = false;
        for(auto it : freq){
            if(it.second%2){
                 count = it.second;
                 elem = it.first;
                 flag = true;
            }else{
                for(int i = 0 ; i < it.second/2 ; i++)
                a.push_back(it.first);     
            }
        }
        b = a;
        reverse(a.begin(),a.end());
        if(flag) for(int i = 0 ; i < count ; i++) b.push_back(elem);
        b+=a;
        cout<<b<<'\n';
    }
    return 0;
}
