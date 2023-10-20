#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> ans;
 set<vector<int>> st;
// we are using set to avoid the repeation in vector .

void helper(int i, int n, vector<int> &nums, int tar, vector<int> &res) {
    if (tar == 0) {
        st.insert(res);
        return; // Return here after adding to ans
    }
    if (i >= n) return;
    if (tar >= 0) { // Corrected the condition here
        res.push_back(nums[i]);
        helper(i + 1, n, nums, tar - nums[i], res);
        res.pop_back();
    }

    helper(i + 1, n, nums, tar, res);
}

int main() {
    vector<int> nums = {1,2,3,1,1,1};
    int target = 3;
    vector<int> res;
    helper(0, nums.size(), nums, target, res);
   

        copy(st.begin(), st.end(), back_inserter(ans));

    for (const auto &row : ans) {
        cout << "{";
        for (int i = 0; i < row.size(); i++) {
            cout << row[i];
            if (i < row.size() - 1) cout << ",";
        }
        cout << "}" << endl;
    }
    return 0;
}
