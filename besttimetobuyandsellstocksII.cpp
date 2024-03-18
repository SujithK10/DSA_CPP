#include<bits/stdc++.h>
using namespace std;
 int maxProfit(vector<int>& prices) {
      int maxi=0;
      for(int i=1;i<prices.size();++i)
      {
        if(prices[i]>prices[i-1])
        {
            maxi+=prices[i]-prices[i-1];
        }
      }
return maxi;
}
int main()
{
    vector<int> prices={1,2,3,4,5};
    int tot=maxProfit(prices);
    cout<<tot;

}
