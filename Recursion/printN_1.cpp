#include <iostream>
using namespace std;
void helper(int n) {
      if(n==0) return ;
      else{
        cout<<n<<endl;
        helper(n-1);
      }
 }

int main() {
 int n ;
 cout<<"Enter the Number : ";
 cin>>n;
  helper(n);
  return 0;
}