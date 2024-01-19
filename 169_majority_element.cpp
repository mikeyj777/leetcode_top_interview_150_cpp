#include <cmath>
#include <map>
#include <iostream>
#include <vector>
#include <string>

#include "helpers.h"

using namespace std;

class Solution {

public:
    int majorityElement(vector<int>& nums) {
        float sz = (float) nums.size();
        float goal = ceil(sz / 2);
        map<int, int> counter;

        int i = 0;
        while (true){
            if (i >= nums.size()) break;
            if (counter.count(nums[i]) == 0) {
                counter[nums[i]] = 1;
            } else {
                counter[nums[i]]++;
            }
            if (counter[nums[i]] >= goal) {
                return nums[i];
            }
            i++;
            int_int_map_printer(counter);
        }
        
        return -1;
    }
    
};

int main()
{
    Solution sol = Solution();
    vector<int> nums = {2,2,1,1,1,2,2};
    int k = sol.majorityElement(nums);
    cout << "majority element:  " << k;
    cout << endl;
}


