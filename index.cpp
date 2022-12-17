#include <iostream>

using namespace std;

void checkIfTheSame(int &, int &);
// bool isEqual;


int main(){
    // int input1;
    // int input2;

    int a = 10;
    int b = 20;
    int c = a;
    int &d = a;


    checkIfTheSame(a, b);
    checkIfTheSame(a, c);
    checkIfTheSame(a, d);



    // checkIfTheSame(ref_ab , ref_ac);
    // // checkIfTheSame(a , c);
    // // checkIfTheSame(a , d);

}

void checkIfTheSame( int &x, int &y){

    if((x == y)){
        cout << endl;
        cout << x << endl;
        cout << y << endl;
    }else if(((x == y) && (&x == &y)) || ((x == y) && (&x != &y)) || ((x != y) && (&x != &y))){
        cout << endl;
        cout << x << " address: " << &x << endl;
        cout << y << " address: " << &y << endl;
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

