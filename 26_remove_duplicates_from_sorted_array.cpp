#include <iostream>
#include <vector>
#include <string>

#include "helpers.h"

using namespace std;

class Solution {

public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 1;
        auto it = nums.begin();
        while (true){
            mj_printer(nums);
            if (i >= nums.size()) break;
            j = i + 1;
            if (j >= nums.size()) break;
            while (nums[j] == nums[i]) {
                nums.erase(it + j);
                if (j >= nums.size()) break;
            }
            i++;
        }
        cout << "unique values: ";
        mj_printer(nums);
        return nums.size();
    }
    
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = sol.removeDuplicates(nums);
    cout << "count of unique values:  " << k;
    cout << endl;
}


