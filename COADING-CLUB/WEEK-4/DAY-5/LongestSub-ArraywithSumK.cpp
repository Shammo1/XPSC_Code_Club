// //problem-11
// class Solution {
// public:
//     int lenOfLongestSubarr(vector<int>& arr, int k) {
//         unordered_map<int, int> sumMap;
//         int sum = 0;
//         int maxLength = 0;

//         for (int i = 0; i < arr.size(); i++) {
//             sum += arr[i];

//             if (sum == k) {
//                 maxLength = i + 1;
//             }

//             if (sumMap.find(sum - k) != sumMap.end()) {
//                 maxLength = max(maxLength, i - sumMap[sum - k]);
//             }

//             if (sumMap.find(sum) == sumMap.end()) {
//                 sumMap[sum] = i;
//             }
//         }

//         return maxLength;
//     }
// };
