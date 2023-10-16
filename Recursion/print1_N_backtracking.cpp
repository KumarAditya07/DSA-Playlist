#include <iostream>
using namespace std;
void helper(int n) {
      if(n<1) return ;
      else{
        helper(n-1);
        cout<<n<<endl;
      }
 }

int main() {
 int n ;
 cout<<"Enter the Number : ";
 cin>>n;
  helper(n);
  return 0;
}