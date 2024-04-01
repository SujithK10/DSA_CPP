#include<bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums) {
       int far=0,jump=0,curr=0;
       for(int i=0;i<nums.size()-1;i++)
       {
        far=max(far,nums[i]+i);
        if(i==curr)
        {
            curr=far;
            jump++;
        }
       }
       return jump;
}
int main()
{
    vector<int> arr={3,4,1,0,2,1};
    int a=jump(arr);
    cout<<"Minimum jumps required: "<<a;

}
