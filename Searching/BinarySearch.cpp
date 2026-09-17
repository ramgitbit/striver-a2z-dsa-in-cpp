#include <iostream>
using namespace std;

int main() {

    // ============================================================
    //                 BINARY SEARCH - COMPLETE CONCEPT
    // ============================================================

    /*
        BINARY SEARCH KYA HAI?
        ----------------------
        Binary Search ek searching algorithm hai.

        Iska kaam:
        Array ke andar kisi TARGET element ko find karna.

        Example:
        arr = {10, 20, 30, 40, 50, 60}

        target = 40

        Hume check karna hai ki 40 array mein hai ya nahi.
    */


    // ============================================================
    // 1. IMPORTANT CONDITION
    // ============================================================

    /*
        Binary Search lagane ke liye array ka SORTED hona zaroori hai.

        Example of SORTED array:
        {10, 20, 30, 40, 50, 60}

        Ye ascending order mein hai.

        Agar array:
        {40, 10, 60, 20, 30, 50}

        hai, toh normal Binary Search directly nahi laga sakte.
    */

    int arr[] = {10, 20, 30, 40, 50, 60};

    int n = 6;              // Array mein total 6 elements hain

    int target = 40;        // Hume 40 ko search karna hai


    // ============================================================
    // 2. THREE IMPORTANT VARIABLES
    // ============================================================

    /*
        Binary Search mein mainly 3 variables use karte hain:

        l = low
        h = high
        m = middle

        LOW:
        Search area ka starting index.

        HIGH:
        Search area ka ending index.

        MID:
        Search area ka middle index.
    */

    int l = 0;              // Starting index = 0

    int h = n - 1;          // Last index = 5


    /*
        Array:

        Index:  0   1   2   3   4   5
               ------------------------
        Value: 10  20  30  40  50  60

        Initially:

        l = 0
        h = 5

        Matlab hum poore array mein search karenge.
    */


    // ============================================================
    // 3. WHILE LOOP
    // ============================================================

    /*
        Jab tak:

            l <= h

        tab tak search karte rahenge.

        Agar:

            l > h

        ho gaya, iska matlab search karne ke liye
        koi element bacha hi nahi.

        Isliye target array mein nahi mila.
    */

    while(l <= h) {


        // ========================================================
        // 4. MIDDLE ELEMENT
        // ========================================================

        /*
            Har iteration mein MID dobara calculate karna zaroori hai.

            Formula:

                m = (l + h) / 2

            Example:

                l = 0
                h = 5

                m = (0 + 5) / 2
                m = 2

            So:

                arr[m] = arr[2]
                       = 30
        */

        int m = (l + h) / 2;


        // ========================================================
        // 5. CASE 1 - TARGET MIL GAYA
        // ========================================================

        /*
            Agar middle element hi target ke equal hai:

                arr[m] == target

            Matlab target mil gaya.
        */

        if(arr[m] == target) {

            cout << "Element found at index " << m;

            // return 0 se poora program terminate ho jayega.
            return 0;
        }


        // ========================================================
        // 6. CASE 2 - TARGET RIGHT SIDE MEIN HAI
        // ========================================================

        /*
            Agar:

                arr[m] < target

            Example:

                arr[m] = 30
                target = 40

                30 < 40

            Kyunki array SORTED hai, iska matlab target
            middle ke RIGHT side mein hoga.

            Isliye LEFT part ko ignore kar sakte hain.

            New low:

                l = m + 1
        */

        else if(arr[m] < target) {

            l = m + 1;
        }


        // ========================================================
        // 7. CASE 3 - TARGET LEFT SIDE MEIN HAI
        // ========================================================

        /*
            Agar:

                arr[m] > target

            Example:

                arr[m] = 50
                target = 40

                50 > 40

            Kyunki array SORTED hai, target
            middle ke LEFT side mein hoga.

            Isliye RIGHT part ko ignore kar sakte hain.

            New high:

                h = m - 1
        */

        else {

            h = m - 1;
        }


        /*
            IMPORTANT:

            Next iteration mein l ya h change ho chuka hai.

            Isliye next iteration mein:

                int m = (l + h) / 2;

            dobara calculate hoga.

            Isi wajah se MID ko while loop ke ANDAR
            likhte hain.
        */
    }


    // ============================================================
    // 8. TARGET NAHI MILA
    // ============================================================

    /*
        Agar while loop khatam ho gaya aur return nahi hua,
        iska matlab target array mein nahi mila.

        Example:

            arr = {10, 20, 30, 40, 50, 60}
            target = 45

        45 array mein nahi hai.

        Isliye loop ke baad ye statement chalega.
    */

    cout << "Element not found";


    return 0;
}