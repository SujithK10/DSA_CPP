void moveZeroes(vector<int>& nums) {
        int i;
        int n=0;
        
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0)
            {
                swap(nums[n++],nums[i]);
            }
            
            
        }
    }
