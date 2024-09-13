 vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> mp;
       vector<int> ans;
       for(int i=0;i<nums.size();i++)
       {
        int com=target-nums[i];
        if(mp.find(com)!=mp.end())
        {
            return{mp[com],i};
        }
        else{
            mp[nums[i]]=i;
        }
       }
       return {-1};
    }
