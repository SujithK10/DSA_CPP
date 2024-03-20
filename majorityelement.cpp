#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(auto x:nums)
        {
            if(count==0)
            {
                candidate=x;

            }
            if(candidate==x)
            {
                count++;
            }
            else{
                count--;
            }
        }
            return candidate;

    }
int main()
{

    vector<int> nums={3,2,3,3};
    int a=majorityElement(nums);
    cout<<a;
}
