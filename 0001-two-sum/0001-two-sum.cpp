class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int com;
        vector<int> d;

        for (int i = 0; i < nums.size(); i++) {

            com = target - nums[i];

            for (int j = i + 1; j < nums.size(); j++) {

                if (com == nums[j]) {
                    d.push_back(i);
                    d.push_back(j);
                    return d;
                }
            }
        }

        return d;
    }
};