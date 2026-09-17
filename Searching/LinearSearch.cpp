#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int target ;
    cin>>target;
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            cout<<"found the targret";
            return 0;   /// agar upar wali line chal gayi to return 0  pura main function end kar dega
        }
        // else{
        //     cout<<"element not in arr";
        // }
    }
    
    cout<<"element not in arr";
    
}