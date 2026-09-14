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
    int mn = arr[i], mnindex = i;
    for(int j =i+1; j<n; j++){
        if(arr[j] < mn){
        mn = arr[j];
        mnindex = j;
            
        }
    }
    swap(arr[i] , arr[mnindex]);
}
print(arr);
}