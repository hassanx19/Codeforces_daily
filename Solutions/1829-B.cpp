#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n, len = 0 , length = 0;;
    cin>>n;
   vector<int> a(n);
   for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    if(a[i]==0) len++;
     else len = 0;
    length = max(len , length);
   }
   cout<<length<<endl;
}
 
    return 0;
}
