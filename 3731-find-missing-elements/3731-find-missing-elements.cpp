class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int j=0;
        for(int i=mn;i<=mx;i++){
            if(i!=nums[j]){ans.push_back(i);}
            else{
                j++;
            }
        }
        return ans;
    }
};