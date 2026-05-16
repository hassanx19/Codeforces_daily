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
   vector<int> a(n);
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
   }
   int diff = a[1] - a [0], mini;
   for(int i = 1 ; i < n-1 ; i++){  
    diff = min( diff , a[i+1] - a[i]);
   }
   if(diff>=0){
    mini = diff / 2 + 1;
    cout<<mini<<endl;
   } else {
    cout<<0<<endl;
   }
   
}
 
    return 0;
}
