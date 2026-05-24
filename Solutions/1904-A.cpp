#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
/*
Tracked the positions where knight can attack the king and queen and took the intersection.
*/
int dx[4] = {1 , 1 , -1 , -1} , dy[4] = {1 , -1 , 1 , -1};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--){
     ll a , b , xk , yk , xq , yq , cnt = 0;
     cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<int,int>> sk , sq;
    for(int i = 0 ; i < 4 ; i++){
        sk.insert({xk+dx[i]*a , yk+dy[i]*b});
        sk.insert({xk+dx[i]*b , yk+dy[i]*a});
 
        sq.insert({xq+dx[i]*a , yq+dy[i]*b});
        sq.insert({xq+dx[i]*b , yq+dy[i]*a});
    }
    for(auto it: sk){
        if(sq.find(it)!=sq.end()) cnt++;
    }
    cout<<cnt<<'\n';
   }
 
    return 0;
}