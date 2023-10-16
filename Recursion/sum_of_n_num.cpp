#include <iostream>
using namespace std;
int helper(int n) {
    if(n==0){
        return 0;
    }
      return n + helper(n-1);
      
 }

int main() {
 int n ;
 cout<<"Enter the Number : ";
 cin>>n;
  int ans = helper(n);
  cout<<ans;
}