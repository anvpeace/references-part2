#include <iostream>

using namespace std;

void checkIfTheSame(int &, int&);
// bool isEqual;


int main(){
    int input1;
    int input2;

    cout << "Enter number 1: " << endl;
    cin >> input1;


    cout << "Enter number 2: " << endl;
    cin >> input2;

    int a = input1;
    int b = input2;
    int c = a;
    int &d = a;

    int &ref_ab = (a , b);
    int &ref_ac = (a, c);



    checkIfTheSame(ref_ab , ref_ac);
    // checkIfTheSame(a , c);
    // checkIfTheSame(a , d);

}

void checkIfTheSame( int &ref_ab, int &ref_ac){
    // cout << ref_x << " " << &ref_x << endl;

    if(( ref_ab == ref_ac) && (&ref_ac == &ref_ab)){

        cout << "Value " << ref_ab << "; address: " <<&ref_ab << endl;
        cout << "Value " << ref_ac << "; address: " << &ref_ac << endl;
        // cout << "Value " << c << "; address: " << &c << endl;
        // cout << "Value " << d << "; address: " << &d << endl;


    }

}



// Exercise 2.

// Write a function called "checkIfTheSame" that will take two integer arguments. Then the 
// function checks the sent arguments for:
// a) equality
// b) if the two arguments are completely the same (values and addresses are the same)
// c) if the values are the same but the addresses are different
// d) if they are completely different. 
// Each condition if satisfied should print out in the screen the info about the variables. Declare 4 variables a, b, c and d. 
// Variables a and b should have different values, c should be equal to a and d should be a
// reference to 'a'. Then sent those variables in different combinations to the "checkIfTheSame"
// function (a and b, a and c, a and d).

