#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    int n ; 
    cin >> n ;
    if ( (n-1)%3 == 0 || (n+1)%3 == 0 ){
        cout<<"First"<<endl;
    } else {
        cout<<"Second"<<endl;
    }
    
   }
 
 
    return 0;
}
