#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
   int t;
   cin>>t;
   while(t--){
    int n , x = 0 , y = 0;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        if(a[i]==1){
            x++;
        } else {
            y++;
        }
    }int count = 0 , k = 0; 
    if ( y == 0 ){
        cout<<1<<endl;
    } else if (y%2==0){
        for(int i = 0 ; i < n ; i++){
            if (a[i]==2){
                count++;
            } 
            k++;
            if(y / 2 == count){
                cout<<k<<endl;
                break;
            }
        }
    } else {
        cout<<-1<<endl;
    }
    
   }
    return 0;
}