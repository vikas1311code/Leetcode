class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        long long ans = 0;
        long long cur = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < cur)
                continue;
            if (nums[i] > cur) {

                long long cnt = min((long long)k, (long long)(nums[i] - cur));

                long long last = cur + cnt - 1;
                ans += (last * (last + 1)) / 2
                     - ((cur - 1) * cur) / 2;

                k -= cnt;

                if (k == 0)
                    return ans;
            }
            cur = (long long)nums[i] + 1;
        }
        if (k > 0) {

            long long last = cur + k - 1;

            ans += (last * (last + 1)) / 2
                 - ((cur - 1) * cur) / 2;
        }

        return ans;
    }
};