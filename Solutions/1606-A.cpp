#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
 /*
 if the first and last char are same then the count of ab and ba are equal and if not then changing a to b or b to a will make the string having
 same no of ab and ba
 */
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     if(s[0]==s[s.size()-1]) cout<<s<<'\n';
     else{
      if(s[0]=='a'){
         s[s.size()-1] = 'a';
         cout<<s<<'\n';
      } else {
         s[s.size()-1] = 'b';
         cout<<s<<'\n';
      }
     }
 
    }
    return 0;
}
