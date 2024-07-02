/*
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.


Example 1:

Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
Output: [-1,3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
- 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
- 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums) {
    stack<int> s;
    unordered_map<int, int> m;
    for (int n : nums) {
        while (!s.empty() && s.top() < n) {
            m[s.top()] = n;
            s.pop();
        }
        s.push(n);
    }
    vector<int> ans;
    for (int n : findNums)
        // If n exists in the map, push its mapped value (next greater element) into the result vector, otherwise push -1
        ans.push_back(m.count(n) ? m[n] : -1); //The map::count() is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. It returns 0 if the element with key K is not present in the container.
    
    return ans;
}
int main()
{
    int N, SubN;
    cin >> SubN >>N;
    vector<int> Num1(SubN);
    vector<int> Num2(N);
    for (int i = 0; i < SubN; i++)
    {
        cin >> Num2[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Num1[i];
    }
    vector<int> result = nextGreaterElement(Num2, Num1);
    for (int i = 0; i <SubN; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
/*
input:
3
4
4 1 2
1 3 4 2

*/

/*
 Author : SALAH
"HARD WORK CAN CHANGE LUCK"
*/