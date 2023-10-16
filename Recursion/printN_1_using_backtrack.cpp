#include <iostream>
using namespace std;
void helper(int i,int n) {
      if(i>n) return ;
      else{
        helper(i+1,n);
        cout<<i<<endl;
      }
 }

int main() {
 int n ;
 cout<<"Enter the Number : ";
 cin>>n;
  helper(1,n);
  return 0;
}