    int maxArea(vector<int>& height) {
        int st=0;
        int end=height.size()-1;
        long long  area=0;
        long long  maxA=0;
        int mod=1e9;
        while(st<end)
        {
            area=(long long )min(height[st],height[end])*(end-st)%mod;
            maxA=max(area,maxA);
            if(min(height[st],height[end])==height[st])
            {
                st++;
            }
            else{
                end--;
            }
        }
        return maxA;}
