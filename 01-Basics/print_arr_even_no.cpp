
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout <<"enter value";
        cin >> arr[i];
    }
    cout <<"vallue of aee are"<< endl;
    for(int i = 0; i<n; i++){
        if (arr[i] %2 ==0){
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}