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
        int sumEven = 0;
       for (int even = 0; even <= 99999; even = even + 2) {
        sumEven = sumEven + even;
        numEven = sumEven / even;
       }
       int sumOdd = 0;
       for (int odd = 1; odd <= 99999; odd = odd + 2) {
        sumOdd = sumOdd + odd;
       }
       numEven = sumEven / even;
       numOdd = sumOdd / odd;
    }
    cout << "Number of integers " << numInt << endl;
    cout << "High integer " << high << endl;
    cout << "Low integer " << low << endl;
    cout << "Number of even integers " << numEven << endl;
    cout << "Number of odd integers " << numOdd << endl;
}