//for loop

//syntax
//for(initialization; condition; increment/decrement) {}

#include <iostream>
using namespace std;

int main() {

    // //simple for loop to print numbers from 1 to 5
    // // int i; //// initialization can be occur outside the for loop as well
    // for (int i = 1; i <= 5; i++) {
    //     cout << i << " ";
    // }


    //nested for loop to print a pattern

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}