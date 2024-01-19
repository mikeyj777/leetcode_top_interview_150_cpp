#include <iostream>
#include <vector>
#include <string>

#include "helpers.h"

using namespace std;

class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        int swap;
        for (int i = 0; i < k; i++) {
            swap = nums[sz-1];
            for (int j = sz-1; j > 0; j--) {
                // vector_printer(nums);
                nums[j] = nums[j-1];
            }
            nums[0] = swap;
        }
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {-1,-100,3,99};
    int k = 2;
    sol.rotate(nums, k);
    cout << "rotated array:  " << endl;
    vector_printer(nums);
    cout << endl;
}