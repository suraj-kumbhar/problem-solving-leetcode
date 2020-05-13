// 75. Sort Colors
// Medium

// 2814

// 206

// Add to List

// Share
// Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Note: You are not suppose to use the library's sort function for this problem.

// Example:

// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Follow up:

// A rather straight forward solution is a two-pass algorithm using counting sort.
// First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
// Could you come up with a one-pass algorithm using only constant space?

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int r = 0;
//         int w = 0;
//         int b = 0;
//         for (auto i : nums) {
//             if (i == 0) r++;
//             else if (i == 1) w++;
//             else b++;
//         }
//         int i = 0;
//         for (i; i < r; i++) {
//             nums[i] = 0;
//         }
//         for (i = r; i < r + w; i++) {
//             nums[i] = 1;
//         }
//         for (i = r + w; i < r + w + b; i++) {
//             nums[i] = 2;
//         }
//     }
// };

// Dutch Nation Flag Algo

class Solution {
public:

    void sortColors(vector<int>& v) {
        int n = v.size();
        int l = 0;
        int m = 0;
        int r = n - 1;
        while (m <= r) {
            // cout<<"l : "<<l<<" m : "<<m<<" r : "<<r<<"\n";
            if (v[m] == 0) {
                swap(v[m], v[l]);
                m++;
                l++;
            }
            else if (v[m] == 1) {
                m++;
            }
            else {
                swap(v[m], v[r]);
                r--;
            }
            // for(auto i:v) {
            //     cout<<i<<"  ";
            // }
            // cout<<"\n";
        }
    }
};