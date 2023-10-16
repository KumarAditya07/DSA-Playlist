#include <iostream>
using namespace std;
void Name(string name,int n) {
      if(n==0) return ;
      else{
          cout<<"Hello "<<name<<endl;
            n=n-1;
            Name(name,n);
      }

      
}
int main() {
  string name ;
  int n = 5;
   getline(cin,name);

   Name(name,n);


   return 0;
}