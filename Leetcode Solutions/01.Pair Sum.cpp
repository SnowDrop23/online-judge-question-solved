//discussion: https://docs.google.com/document/d/15xWjjfaNqpHDpk2rMRnKAjO2am35LQXKlHYB_-PTwbk/edit?usp=sharing

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    
    vector<pair<int, int>> numIdx;
    for(int i = 0; i < nums.size(); i++) numIdx.push_back({nums[i], i});
    sort(numIdx.begin(), numIdx.end());
    int i = 0, j = nums.size()-1;

    while(i < j)
    {
        int pairSum = numIdx[i].first + numIdx[j].first;
        if(pairSum > target) j--;
        else if(pairSum < target) i++;
        else
        {
            
            return {numIdx[i].second, numIdx[j].second};
        }
    }
    
}

int main()
{
    vector<int> arr = {3,2,4};
    int target = 6;
    vector<int>ans = twoSum(arr, target);
    cout << "[" << ans[0] << "," << ans[1] << "]" << endl;


}
