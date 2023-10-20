#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main() {
    // vector<string> vectorString;
    // string input;
    // cout << "Enter strings (press Enter after each string, and type 'done' to finish): " << endl;

    // // Taking input until the user enters 'done'
    // while (true) {
    //     cin >> input;
    //     if (input == "done") {
    //         break;
    //     }
    //     vectorString.push_back(input);
    // }

    // // Printing the vector of strings
    // cout << "Vector of strings: ";
    // for (const auto &str : vectorString) {
    //     cout << str << " ";
    // }
    // cout << endl;

    // return 0;
    int n=2;
    vector<string> str;
     

    for(int i =0;i<n;i++){
        string s;
        cout<<"Enter string : "<<endl;
        cin>>s;

        str.push_back(s);
       
    }

    //  for(int i =0;i<str.size();i++){
    //     cout<<str[i]<<" ";
    //  }

    for(auto i : str)
       cout<<i<<" ";







}
