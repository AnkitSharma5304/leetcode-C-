class Solution { // used to find subarray
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0; // initialize sum with zero 
        int count=nums[0]; // count with nums[0]
        for(int i=0 ; i<nums.size() ; i++){
            sum=sum+nums[i];
            count=max(count,sum); 
            if(sum<0){
                sum=0;
            }
            

            
        }
        return count;
    }
};