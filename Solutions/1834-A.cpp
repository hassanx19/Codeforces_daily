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
    vector<int> s(n);
  for ( int i = 0 ; i < n ; i++){
    cin>>s[i];
  }
  int a = 0 , b = 0;
  for(int j = 0 ; j < n ; j++){
    if(s[j]==1){
      a++;
    } else {
      b++;
    }
  }
    int t = n/2 - a + 1;
    int min = t;
    if (a<=b){
        if(n%4==0){
            min = n/2 - a;
        } else if ( n%2==0 && n%4!=0){ 
          min = n/2 - a + 1;
              }   else {
            b = b - min;
            if(b%2==0){
                min = t;
            } else {
                min = min + 1;
            }
        }
    } else {
        if ( b%2 == 0){
            min = 0;
        }
         else {
            min = 1;
         }
    }
    cout<<min<<endl;
 
}
    return 0;
}
 
