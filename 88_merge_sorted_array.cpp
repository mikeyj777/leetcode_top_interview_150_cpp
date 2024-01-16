#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {

public:
    void print(vector<int>& arr) {
        for (const int& num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // cout << "you are in the merge routine" << " ";

        if (n == 0) {
            return;
        }
        
        if (m == 0){
            nums1 = nums2;
            return;
        }

        int pos = nums1.size() - 1;
        while (true) {
            if (nums1[m-1] >= nums2[n-1]) {
                nums1[pos] = nums1[m-1];
                m--;
                if (m < 0) {
                    break;
                }
            } else {
                nums1[pos] = nums2[n-1];
                n--;
                if (n < 0) {
                    break;
                }
            }
            pos--;
            print(nums1);
            print(nums2);
        }
        cout << endl;
    }
    
};

int main()
{
    vector<int> nums1 = {1};
    int m = 1;
    vector<int> nums2 = {};
    int n = nums2.size();
    
    Solution sol = Solution();
    sol.merge(nums1, m, nums2, n);
    cout << "final" << endl;
    sol.print(nums1);
    sol.print(nums2);
    cout << endl;

}


