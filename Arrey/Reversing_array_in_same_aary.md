# Reverse an Array in the Same Array

We can reverse an array **without creating another array** by using two pointers.

```cpp
#include <iostream>
using namespace std;

int main() {

    // Original array
    int a[] = {1, 2, 3, 4, 5};

    // Find the size of the array
    int n = sizeof(a) / sizeof(a[0]);

    // i points to the first element
    int i = 0;

    // j points to the last element
    int j = n - 1;

    // Continue until i and j meet
    while (i < j) {

        // Swap first and last elements
        swap(a[i], a[j]);

        // Move i towards the right
        i++;

        // Move j towards the left
        j--;
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}