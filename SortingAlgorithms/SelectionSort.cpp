#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
}
int main(){
vector<int> arr = {5,6,4,3,2,1};
int n = arr.size();
for(int i=0; i<n-1; i++){
    int mnindex = i;
    for(int j =i+1; j<n; j++){
        if(arr[j] < arr[mnindex]){
        mnindex = j;
            
        }
    }
    swap(arr[i] , arr[mnindex]);
}
print(arr);
}
// SELECTION SORT
// ────────────────────────────

// Idea:
// Har pass mein minimum element select karo.

// Ascending:
// arr[j] < arr[minIndex]

// Descending:
// arr[j] > arr[maxIndex]

// Outer loop:
// i = 0 → n-2

// Inner loop:
// j = i+1 → n-1

// Steps:
// 1. minIndex = i
// 2. minimum search karo
// 3. minIndex update karo
// 4. swap(arr[i], arr[minIndex])

// Time:
// Best    = O(n²)
// Average = O(n²)
// Worst   = O(n²)

// Space:
// O(1)

// In-place:
// YES

// Stable:
// NO (standard implementation)

// Maximum swaps:
// n - 1

// Comparisons:
// n(n-1)/2