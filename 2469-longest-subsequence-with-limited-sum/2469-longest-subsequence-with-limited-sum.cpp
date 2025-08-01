class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        
        sort(begin(nums), end(nums));
        for(int i = 1; i<n; i++) {
            nums[i] += nums[i-1];
        }
        
        int m = queries.size();
        vector<int> result(m);
        
        for(int i = 0; i<m; i++) {
            auto it = upper_bound(begin(nums), end(nums), queries[i]) - begin(nums);
            
            result[i] = it;
        }
        return result;
    }
};