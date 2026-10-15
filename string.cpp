#include<iostream>
using namespace std; 

int main(){
    //selecting character from a string..
    string name1 = "anubhav";
    cout << name1[0] << endl;

    //concatenation of string..
    string firstName = "Anubhav";
    string lastName = "Kumar";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    //string length..
    string car = "porche";
    cout << car.length() << endl;

    //user input string..
    string name;
    cout << "Type your first name: ";
    cin >> name; // get user input from the keyboard
    cout << "Your name is: " << name << endl;

    //c-style string..
    char greeting[6] = {'H', 'e', 'l', 'l','o', '\0'};
    cout << greeting << endl;

    return 0;
}