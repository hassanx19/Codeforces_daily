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
    int mini = a[0];
    int maxi = a[0];
    for(int i = 1 ; i < n ; i++){
        if(a[i]<mini){
            mini = min(mini , a[i]);
        } else {
            maxi = max(maxi, a[i]);
        }
    }
    int lb;
    int lc;
    vector<int>b(0);
    vector<int>c(0);   
    
    if(mini == maxi){
        cout<<-1<<endl;
    } else {
        for(int i = 0 ; i < n ; i++){
            if(a[i]==mini){
                b.push_back(a[i]);
            } else {
                c.push_back(a[i]);
            }
        }
        lb = b.size();
    lc = c.size();
    cout<<lb<<" "<<lc<<endl;
    for(int i = 0 ; i < lb ; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i < lc ; i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    }
   
   }
    return 0;
}
