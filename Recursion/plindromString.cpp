#include <iostream>
using namespace std;
bool palindromChecker(int l,int r,string &str) {
    if(l>r) return true;
     
    if(str[l]!=str[r]) return false;

    return palindromChecker(l+1,r-1,str);
     
 }

int main() {
 string str;
 cin>>str;
  bool pali = palindromChecker(0,str.size()-1,str);

  cout<<"String is palindrom : "<<pali;
  
}