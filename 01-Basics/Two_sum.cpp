
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1,5,7,8,9};
    int i =0 , j = 0;
    int target = 12;
    for(i = 0; i<n;i++){
        for(j =i; j<n;j++){
            if (arr[i]+arr[j] == target){
                cout<< "index are "<<i<<endl<<j <<endl;
            }
        }
    }
    

    return 0;
}