#include<bits/stdc++.h>
using namespace std;
void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        if(k>n)
        {
            k=k%n;
        }
        reverse(nums.begin(),nums.end());
        int p1=k;
        int p2=n-1;
        while(p1<=p2)
        {
            swap(nums[p1],nums[p2]);
            p1++;
            p2--;
        }
        p1=0;
        p2=k-1;
        while(p1<=p2)
        {
            swap(nums[p1],nums[p2]);
            p1++;
            p2--;
        }
        for(auto x:nums)
        {
            cout<<x<<" ";

        }

    }
int main()
{
   vector<int> nums={1,2,3,4,5,6,7};
   int k=3;
   rotate(nums,k);
}
