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
for(int i=1; i<n-1; i++){
    int key = arr[i];
    int j = i-1;
   while(j >= 0 && arr[j]>arr[key]){
    arr[j+1] =arr[j];
    j--;
    arr[j+1] = key;
   }
            
        
    }
    print(arr);
}


