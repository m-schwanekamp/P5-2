//P5-2
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    int number;
    int integer;
    int numInt=0;
    int high;
    int low;
    int numEven = 0;
    int numOdd = 0;

    //get integer inputs
    cout << "Enter number or Q to quit" << endl;

    //while loop for correct inputs
    while (cin >> number) {
        integer = number;
        numInt++;
        cout << "Enter number or Q to quit" << endl;
        if (cin.fail()) {
            return 0;
        }

        //initialize highest and lowest numbers
        if (1 == numInt) {
            high = integer;
            low = integer;
        }

        // check for updates to high and low numbers
        if (integer > high) high = integer;
        if (integer < low) low = integer;

        // count number of even and odd integers
       if ( integer % 2 == 0) {
           numEven++;
       }
       if (integer % 2 >>0) {
            numOdd++;
       }
    }
    cout << "Largest value: " << high;
    cout << " Smallest value: " << low << endl;
    cout << "Even number count: " << numEven;
    cout << " Odd number count: " << numOdd << endl;
}
