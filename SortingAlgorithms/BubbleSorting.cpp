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
int totalswap = 0;
for(int i=0; i<n-1; i++){
    int swaps = 0;
    for(int j =0; j<n-1-i; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            swaps++;
            totalswap++;
        }
    }
    if (swaps == 0){
        break; //// it is the best case when arrey is given already shorted.
    }
}
print(arr);cout<<endl;
cout<<"totalswaps: "<<totalswap;
}