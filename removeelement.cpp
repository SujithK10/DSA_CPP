 #include<bits/stdc++.h>
 using namespace std;
 int removeElement(vector<int>& nums, int val) {
        vector<int> :: iterator it;
        it=nums.begin();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(it);
                it--;
                i--;
            }
            it++;

        }
        return nums.size();
    }
int main()
{

    vector<int> num={3,2,2,3};
    int target=3;
    int a=removeElement(num,target);
    cout<<a;
}
