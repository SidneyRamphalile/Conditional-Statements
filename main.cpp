#include <iostream>
using namespace std;

void isEven(int num){
    if (num%2 == 0){
        cout << num << " is even!" << endl;
    } else {
        cout << num << " is odd!" << endl;
    }
}

void signOfNumber(int num){
    if(num < 0){
        cout << num << " is negative" << endl;
    } else if(num > 0){
        cout << num << " is positive" << endl;
    } else {
        cout << num << " is 0" << endl;
    }
}

int main(){
    int choice, num;

    cout << "1. Check if even" << endl;
    cout << "2. Check the sign of the number" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";

    cin >> choice;
    switch(choice){
        case 1:                        // This case checks if the number is even or odd
            cout << "Enter number: "; //Print out the input prompt
            cin >> num;               // User must input a number. This accepts the inputted choice
            isEven(num);               // This calls the isEven() function
            break;
        case 2:
            cout << "Enter number: "; //Print out the input prompt
            cin >> num;               // User must input a number. This accepts the inputted choice
            signOfNumber(num);        // This calls the signOfNumber() function
            break;
        case 3:
        default:
            break;
    }
    return 0;
}
