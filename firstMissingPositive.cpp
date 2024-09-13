 int firstMissingPositive(vector<int>& nums) {
       int missingno=1;
       sort(nums.begin(),nums.end());
       for(int num:nums)
       {
        if(num == missingno)
        {
            missingno++;
        }
        else if(num >missingno)
        {
            break;
        }
       }
       return missingno;
    }
