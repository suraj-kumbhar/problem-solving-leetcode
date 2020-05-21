// 1089. Duplicate Zeros
// Easy


// Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

// Note that elements beyond the length of the original array are not written.

// Do the above modifications to the input array in place, do not return anything from your function.



// Example 1:

// Input: [1,0,2,3,0,4,5,0]
// Output: null
// Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
// Example 2:

// Input: [1,2,3]
// Output: null
// Explanation: After calling your function, the input array is modified to: [1,2,3]


// Note:

// 1 <= arr.length <= 10000
// 0 <= arr[i] <= 9


// class Solution {
// public:
//     void duplicateZeros(vector<int>& arr) {
//         int n=arr.size();
//         for(int i=0;i<n-1;i++) {
//             if(arr[i]==0) {
//                 for(int j=n-2;j>i;j--) {
//                     arr[j+1]=arr[j];
//                 }
//                 i++;
//                 arr[i]=0;
//             }
//         }
//     }
// };


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int zero = 0;
        // cout<<zero;
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if (arr[i] == 0) {
                if (i == j) {
                    arr[n - 1] = 0;
                    n--;
                    break;
                }
                j--;
                zero += 1;
            }
            i++;
        }
        cout << zero;
        j = n - 1;
        for (int i = n - zero - 1; i >= 0; i--) {
            if (arr[i] != 0) {
                arr[j] = arr[i];
            }
            else {
                arr[j] = arr[i];
                j--;
                arr[j] = arr[i];
            }
            j--;
        }


    }
};