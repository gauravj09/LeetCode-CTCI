class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        if(nums.size() == 0) return 0;
        
        //calculates distance from start to end of the array while checking deletions
        return distance(nums.begin(), remove(nums.begin(), nums.end(), val));
    }
        
};
