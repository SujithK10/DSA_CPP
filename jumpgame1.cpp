#include<bits/stdc++.h>
using namespace std;
 bool canJump(vector<int>& nums) {
        int index=nums.size()-1;
        for(int i=index;i>=0;i--)
        {
            if(nums[i]+i >=index)
            {
                index=i;
            }
        }
        if(index==0)
        return true;
        else
        return false;
}
int main()
{
  vector<int> arr={2,3,1,1,4};
  if(canJump(arr))
  {
      cout<<"True";

  }
  else{
    cout<<"False";
  }
}
