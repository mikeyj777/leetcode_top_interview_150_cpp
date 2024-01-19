#pragma once

#include <map>
#include <iostream>
#include <vector>

using namespace std;

void vector_printer(vector<int> arr) {
    for (const int& num : arr)
        {
            cout << num << " ";
        }
        cout << endl;
}

void int_int_map_printer(map<int,int> my_map) {

    for (auto iter = my_map.begin(); iter != my_map.end(); iter++)
   {
     cout<<(*iter).first<<"    "<<(*iter).second<<"\n";
   }

}