#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		int i = 0;
		int j = 0;

		while (i < nums.size()) {
			for (j = i + 1; j < nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					vector<int> solution = { i, j };
					return solution;
				}
			}
			i++;
		}
		return { i, j };
	}
};

int main(int argc, char **argv)
{
	Solution s;
	// vector<int> nums = { 2, 7, 11, 15 };
	// int target = 9;

	vector<int> nums = { 3, 2, 4 };
	int target = 6;

	vector<int> solution = s.twoSum(nums, target);

	for (int i = 0; i < solution.size(); i++)
		cout << solution[i] << "\n";

	return 0;
}
