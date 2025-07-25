class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        
        for(int i = 0; i<n; i++) {
            
            int num3 = nums[i];//sorry for that
            
            //first ask num1
            if(num3 <= num1) {
                num1 = num3;
            } else if(num3 <= num2) { //ask num2
                num2 = num3;
            } else { //num1 < num2 inki life set hai already
                return true;
            }
        }
        
        return false;
        
    }
};