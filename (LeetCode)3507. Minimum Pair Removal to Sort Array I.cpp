
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimumPairRemoval(vector<int>& nums)
{
	int count = 0, idx = 0;
	
	while(!is_sorted(nums.begin(), nums.end()))
	{
		int minSum = 1e9;
		int idx = -1;
		int n = nums.size();

		for(int i = 0; i < n-1; i++)
		{
			int sum = nums[i] + nums[i+1];
			if(sum < minSum)
			{
				minSum = sum;
				idx = i;
			}
		}

		nums[idx] = minSum;
		nums.erase(nums.begin() + idx+1);
		count++;
	}
	return count;
	
	
}

int main()
{
    int n, count;
	cout << "Enter size of the array: ";
	cin >> n;
	vector<int>A(n);

	cout << "Enter array elements: ";
	for(int i = 0; i < n; i++) cin >> A[i];

	int res = minimumPairRemoval(A);
	cout << res << endl;
	
	//for(int i : A) cout << i << " ";
	
	

} 
