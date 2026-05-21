#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n;
    cin>>n;
    int min;
    string s ;
    cin>>s;
    int i = 0;
    int j = n-1;
    while( s[i]!=s[j] && i<=j ){
        i++;
        j--;
    }
    min = j - i + 1;
   cout<<min<<endl;
    
   }
 
  
   
    return 0;
}
 