#pragma once
#include <iostream>
#include <vector>

using namespace std;

void mj_printer(vector<int> arr) {
    for (const int& num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
}