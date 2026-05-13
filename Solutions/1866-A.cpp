#include<iostream>
#include<cmath>
#include <vector>
using namespace std;
#include <string>
 
int main(){ 
  long long n;
  cin>>n;
  vector<int> a(n);
  for( int k = 0 ; k < n ; k++){
    cin>>a[k];
    if ( a[k]<0 ){
      a[k] = a[k] * (-1);
    }
  }
  long long mini = a[0];
  for ( int i = 1 ; i < n; i++ ){
    if (a[i]<mini){
      mini = a[i];
    }
  }
  cout<<mini<<endl;
    return 0;
}
