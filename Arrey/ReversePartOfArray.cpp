#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50,60,70};  /// if want tev index 1 to 3
    int n = sizeof(arr)/4;
    int i =1; // <<<<<<<<<<<<<<<<<<
    int j = 3; //<<<<<<<<<<<<<<<<<<<<<<
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++; // i se age jayenge 
        j--; // j se ek ek karke piche aayenge
    }
    for (int k = 0; k<n;k++){
        cout<<arr[k]<<" ";
    }



}