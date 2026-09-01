#include <iostream>
using namespace std;

int main() {

    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // Print transpose of arr
    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 3; i++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}