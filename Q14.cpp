/* Next permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // vector <int> nums;
        next_permutation(nums.begin(), nums.end());
        for(int x :nums){
            cout<<x<<" ";
            
        }
//         if(nums.size() ==1)
//         {
//             return;
//         }
        
//         int index1;
//          int index2 =0;

//         for(int i = nums.size() -2 ; i >=0 ; i--){
//             if(nums[i] < nums[i+1]){
//                 index1 = i;
//                 break;
//             }
//         }
        
//         if(index1 < 0){
//             reverse(nums.begin(), nums.end());
            
//         }
        
//         else{
//              int index2= 0;
//             for(int i = nums.size() - 1; i >=0 ; i--){
//                 index2 = i;
//                 break;
//             }
//         }
//         swap(nums[index1],nums[index2]);
//         reverse(nums.begin() + index1 +1, nums.end());
        // sort(index1 +1, nums.size());
    }
};

*/