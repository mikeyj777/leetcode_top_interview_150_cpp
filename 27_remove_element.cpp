#include <iostream>
#include <vector>
#include <string>

#include "helpers.cpp"

using namespace std;

class Solution {

public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (true){
            mj_printer(nums);
            if (nums.size() <= 0 || i >= nums.size()) {
                break;
            }
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
            i++;
        }

        return nums.size();
    }
    
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int k = sol.removeElement(nums, val);
    cout << k;
    cout << endl;
}


