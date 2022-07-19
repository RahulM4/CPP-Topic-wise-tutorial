/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
class Solution
{
public:
    int maximumUnits(vector<vector<int>> &bt, int ts)
    {
        int ans = 0;
        // sort
        sort(bt.begin(), bt.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] > b[1]; });
        int i ;
        for(auto &b : bt)
        {
           i=min(b[0], ts);
              ts -= i;
                ans += i*b[1];
                if(ts == 0)
                    break;
        }
        return ans;
        
       
    }
};
// @lc code=end
