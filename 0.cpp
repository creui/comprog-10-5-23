#include <iostream>

using namespace std;

int main () {
    int program;

    cout << endl << "[1] Program 1" << endl << "[2] Program 2" << endl << "[3] Even Group" << endl << endl;
    cin >> program;

    cout << endl;

    if (program == 1) {
        int num;

        cout << "Input an integer: ";
        cin >> num;

        cout << endl << num;

        if (num > 0)
            cout << " is positive.";
        else if (num < 0)
            cout << " is negative.";
        else if (num == 0)
            cout << " is equal to 0.";
    }
    else if (program == 2) {
        int num1, num2, num3, tmp;

        cout << "Input the first integer: ";
        cin >> num1;
        cout << "Input the second integer: ";
        cin >> num2;
        cout << "Input the third integer: ";
        cin >> num3;

        cout << endl;

        if (num1 > num3) {
            tmp = num1;
            num1 = num3;
            num3 = tmp;
        }
        if (num1 > num2) {
            tmp = num1;
            num1 = num2;
            num2 = tmp;
        }
        if (num2 > num3) {
            tmp = num2;
            num2 = num3;
            num3 = tmp;
        }

        cout << "The numbers in ascending order: " << num1 << ", " << num2 << ", " << num3;
    }
    else if (program == 3) {
        int num;

        cout << "Input an integer between 0 - 35: ";
        cin >> num;

        cout << endl;

        if (num > 35 || num < 0)
            cout << "Invalid input.";
        else if (num <= 9)
            cout << num;
        else if (num == 10)
            cout << "A";
        else if (num == 11)
            cout << "B";
        else if (num == 12)
            cout << "C";
        else if (num == 13)
            cout << "D";
        else if (num == 14)
            cout << "E";
        else if (num == 15)
            cout << "F";
        else if (num == 16)
            cout << "G";
        else if (num == 17)
            cout << "H";
        else if (num == 18)
            cout << "I";
        else if (num == 19)
            cout << "J";
        else if (num == 20)
            cout << "K";
        else if (num == 21)
            cout << "L";
        else if (num == 22)
            cout << "M";
        else if (num == 23)
            cout << "N";
        else if (num == 24)
            cout << "O";
        else if (num == 25)
            cout << "P";
        else if (num == 26)
            cout << "Q";
        else if (num == 27)
            cout << "R";
        else if (num == 28)
            cout << "S";
        else if (num == 29)
            cout << "T";
        else if (num == 30)
            cout << "U";
        else if (num == 31)
            cout << "V";
        else if (num == 32)
            cout << "W";
        else if (num == 33)
            cout << "X";
        else if (num == 34)
            cout << "Y";
        else if (num == 35)
            cout << "Z";
    }
    else
        cout << "Invalid input.";

    cout << endl;

    return 0;
}
