class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int result[2];
        while(i<nums.size()){
            int dif= target-nums[i];
            for (int j=i+1;j<nums.size();j++){
                if (nums[j]==dif){
                    return{i,j};
                }
            }
            i++;
        }
        return {};
    }
};