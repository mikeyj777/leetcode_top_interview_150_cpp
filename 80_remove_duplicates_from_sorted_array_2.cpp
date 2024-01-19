#include <iostream>
#include <vector>
#include <string>

#include "helpers.cpp"

using namespace std;

class Solution {

public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j;
        int instance_count;
        auto it = nums.begin();
        int sz = nums.size();
        while (true){
            mj_printer(nums);
            if (i >= sz) break;
            j = i + 1;
            if (j >= sz) break;
            instance_count = 1;
            while (nums[j] == nums[i]) {
                mj_printer(nums);
                instance_count++;
                if (instance_count > 2) {
                    nums.erase(it + j);
                    instance_count--;
                    sz = nums.size();
                    j--;
                }
                j++;
                if (j >= sz) break;
            }
            i++;
        }
        cout << "final array: ";
        mj_printer(nums);
        return nums.size();
    }
    
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int k = sol.removeDuplicates(nums);
    cout << "count of values:  " << k;
    cout << endl;
}


