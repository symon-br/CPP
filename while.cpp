#include <iostream>
using namespace std;

int main() {

    // //while loop
    // int i = 10;
    // while (i <= 20) {
    //     cout << i << "\n" ;
    //     i--;
    //     // i++;
    // }

    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    // int i = 0;
    // // i = 0;

    // while (name[i] != '\0') {
    //     cout << name[i] << "\n";
    //     i++;
    // }


    //do while loop

    string name;
    cout << "Enter your name: ";
    cin >> name;
   
    int i = 0;
        do{
            if (name.length() == 7){
                cout << "Thala for a reason" << endl;
            }
            else{
                cout << "Thala is the best!!" << endl;
            }
            i++;
        } while (i < 1);
    

   
    // int j = 1;
    // do {
    //     cout << j << " ";
    //     j++;
    // } while (j <= 5);
    return 0;
}