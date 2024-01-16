#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
        // cout << a << " " << msg.size();

        for (int i = 0; i < 5 ; i++) {
            cout << msg[i] << " ";
        }

    cout << endl;
}