#include <iostream>
using namespace std;

int main() {

    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    int sM = 0 , maxrow ;

    // Print transpose of arr
    for(int i = 0; i < 3; i++) {
        // pahle row me ghus gaya 
        int s = 0;
        for(int j = 0; j < 4; j++) {
            // ab row ke har element pe  jakr uska sum calculate karunaga
            s += arr[i][j];
        }
        if (s>sM){
            sM = s;
            maxrow = i;
        }

    
    }
    cout<<maxrow<<" "<<sM;

    return 0;
}