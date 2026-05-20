#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    long long n ,  k;
    cin>>n>>k;
    if (k%2 ==0 && n%2!=0){
       cout<<"NO"<<endl;
    } else if((n-k)%2!=0 && n%2!=0) {
         cout<<"NO"<<endl;
    }   else {
        cout<<"YES"<<endl;
    }
   }
    return 0;
}
 
