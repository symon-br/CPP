#include <iostream>
using namespace std;

int main(){

//if condition statement
    int number = 1;

    // cout << "Enter a number: "; 
    // cin >> number;

    if (number == 1){
        cout << "say hello" << endl;
    }

    if(number == 0){
        cout << "say hi" << endl;
    }

//if else condition statement
    string name = "anurag";

    if(name[1] == 'n'){
        cout << "chalo ghar chalte hai" << endl;
    }
    else{
        cout << "Ghar mein koi nahi hain" << endl;
    }

//if --> else if condition statement
    string sky = "blue";

    if(sky == "blue"){
        cout << "sky is blue" << endl;
    }
    else if(sky == "red"){
        cout << "sky is red" << endl;
    }
    else{
        cout << "sky is neither blue nor red" << endl;
    }

//short hand if else condition statement
    char grade = 'B';

    grade = (grade == 'A') ? 'A' : 'B';
    cout << "Your grade is: " << grade << endl;

//nested if condition statement
    int x = 15;
    int y = 25;

    if (x > 10) {
    cout << "x is greater than 10\n";

    // Nested if
    if (y > 20) {
    cout << "y is also greater than 20\n";
    }
    }
 
    return 0;
}