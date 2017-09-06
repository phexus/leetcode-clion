//
// Created by phexus on 8/18/17.
//

#include <iostream>
#include <vector>

//using std::vector;
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int max_index = nums.size();
        for (int i = 0; i < max_index && result.size() == 0; ++i) {
            for (int j = i + 1; j < max_index; ++j) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

int main() {
    vector<int> nums = {3, 2, 4};
    int target = 6;
    Solution solution;
    cout << solution.twoSum(nums, target).size();
    return 0;
}