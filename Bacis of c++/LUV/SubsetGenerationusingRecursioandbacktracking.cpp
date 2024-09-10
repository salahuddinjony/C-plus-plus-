#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<vector<int>> allsubsets;

void generate(vector<int>& subset, int i, vector<int>& nums) {
    if (i == nums.size()) {
        allsubsets.push_back(subset);  // Add current subset to allsubsets
        return;
    }

    // Case 1: Do not include the i-th element in the subset
    generate(subset, i + 1, nums);

    // Case 2: Include the i-th element in the subset
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);

    // Backtrack: Remove the last added element
    subset.pop_back();
}

int main() {
    optimize();

    int n;
    cin >> n;  // Input the size of the array
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];  // Input the elements of the array
    }

    vector<int> subset;
    generate(subset, 0, nums);  // Generate all subsets

    // Print all the subsets
    for (auto subsets : allsubsets) {
        for (auto num : subsets) {
            cout << num << " ";  // Print elements of each subset
        }
        cout << endl;  // Newline after each subset
    }

    return 0;
}

/*
 Author : SALAH 
"HARD WORK CAN CHANGE LUCK" 
*/