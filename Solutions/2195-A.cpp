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
    int x = 0 , y = 0;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int j = 0 ; j<n ; j++){
        if (a[j]==67){
            x = 1;
            cout<<"YES"<<endl;
           break;
        }
      
    }
   if(x!=1){
    cout<<"NO"<<endl;
   }
    
   }
   
    return 0;
}
 
