#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   for(int p = 1;p<=t;p++){
    bool flag = false;
    int n , k ;
    cin>> n >> k;
    vector<int> arr(n);
    for(int p = 0 ; p < n ; p++){
    cin>>arr[p];
    if(arr[p]==k){
        flag = true;
    }
    }
    if ( flag == true ){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
 
    return 0;
}
