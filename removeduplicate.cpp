#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
       int curr=0,len=nums.size();
       for(int i=1;i<len;i++)
       {
           if(nums[i]!=nums[curr])
           {
               curr++;

           }
           nums[curr]=nums[i];
       }
       return curr+1;
       }
int main()
{
    vector<int> nums={1,1,1,2,3,4};
    int a=removeDuplicates(nums);
    cout<<a;
}
