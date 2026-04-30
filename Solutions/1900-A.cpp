#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag = false;
    int min = 0 , counts = 0 , dots = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i]==s[i+1] && s[i+1]==s[i+2]&&s[i]=='.'&&i<n){
            min = 2;
            i = i + 2;
            flag = true;
        } else if(s[i]=='.' && flag == false){
            dots++;
        }
    }
   if ( flag == false){
    min = dots;
   }
   cout<<min<<endl;
 
}
 
    return 0;
}
