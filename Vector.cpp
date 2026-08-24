#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(5, 18);
    
    // First loop: prints 18 18 18 18 18 
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Appending a new element  at last
    arr.push_back(6);
    arr.push_back(14);
    arr.pop_back(); // remove the laast element 
    
    // Second loop: accurately checks the updated size and prints 18 18 18 18 18 6
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
