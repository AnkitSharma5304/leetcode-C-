class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>>v;
        int n =nums.size();
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0,j=n-1;
        while(i<j){
            if(v[i].first+v[j].first==target){
            ans.push_back(v[i].second);
            ans.push_back(v[j].second);
            return ans;
            }
            else if(v[i].first+v[j].first<target)i++;
            else j--;
        }

        
        return {-1,-1};
    }
};