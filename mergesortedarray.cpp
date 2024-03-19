#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int f=m-1;
        int s=n-1;
        for(int i=m+n-1;i>=0;i--)
        {
            if(s<0)
            {
                break;
            }
            if(f>=0 && nums1[f]>nums2[s])
            {
                nums1[i]=nums1[f];
                f--;

            }
            else{
                nums1[i]=nums2[s];
                s--;
            }
        }
        for(auto x:nums1)
        {
          cout<<x<<" ";
        }
        }
int main()
{

    vector<int> nums1={1,3,5};
    vector<int>nums2={2,4,6};
    merge(nums1,nums1.size(),nums2,nums2.size());
}
