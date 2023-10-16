#include <iostream>
using namespace std;
void helper(int l,int r,int arr[]) {
    if(l>=r) return ;

    swap(arr[l],arr[r]);
    helper(l+1,r-1,arr);
     
 }

int main() {
 int n = 5;
 int arr[] ={1,2,3,4,5} ;
  helper(0,n-1,arr);
   for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}