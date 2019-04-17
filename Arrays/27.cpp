class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if(nums.size() == 0) return 0;
        
        return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
    }
        
};
