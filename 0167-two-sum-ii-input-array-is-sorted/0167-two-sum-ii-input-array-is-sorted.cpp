class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int s=0;
        int e=n-1;
        while(s<e){
            int sum = numbers[s]+numbers[e];
            if(sum<target){
                s++;
            }
         else if(sum>target){
                e--;
         }
          else {
            return {s+1,e+1};
        }
        }

        return {};
    }
};