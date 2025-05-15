class Solution {
public:
    bool canJump(vector<int>& nums) {
        int target=nums.size()-1;
        for(int i=nums.size()-2 ; i>=0 ; i--){
            if(i+nums[i]>=target){// last se suru krke jao 
                target=i; // agar aa jae to target baadl do 
            }
        }
        return target==0;
    }
};