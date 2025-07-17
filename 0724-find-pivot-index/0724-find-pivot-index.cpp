class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        int Tsum=0;
        for(int &x:nums){
            Tsum +=x;
        }
        int cs=0;
        for(int i=0; i<n; i++){
            int ls=cs;
            int rs=Tsum-ls-nums[i];
            if(ls==rs){
                return i;
            }
            cs+=nums[i];
        }
        return -1;
    }
};