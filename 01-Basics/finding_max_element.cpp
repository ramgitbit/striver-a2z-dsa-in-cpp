#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 99, 5};

    int max = arr[0];
    int secondmax = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondmax = max;  // purana max ab second largest
            max = arr[i];     // naya max
        }
        else if (arr[i] > secondmax && arr[i] != max)
        {
            secondmax = arr[i];
        }
    }

    cout << secondmax;

    return 0;
}