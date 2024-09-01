#include <iostream>
#include <cmath> 
#include <limits> 

using namespace std;

void showMenu() {
    cout << " Calculator :" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Exponentiation (a^b)" << endl;
    cout << "7. Logarithm (base 10)" << endl;
    cout << "8. Sine (in radians)" << endl;
    cout << "9. Cosine (in radians)" << endl;
    cout << "10. Tangent (in radians)" << endl;
    cout << "11. Exit" << endl;
    cout << "Enter your choice: ";
}

void clearInputStream() {
    cin.clear(); 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}

void performAddition() {
    double a, b;
    cout << "Enter two numbers: ";
    while (!(cin >> a >> b)) {
        cout << "Invalid input. Please enter numeric values: ";
        clearInputStream();
    }
    cout << "Result: " << (a + b) << endl;
}

void performSubtraction() {
    double a, b;
    cout << "Enter two numbers: ";
    while (!(cin >> a >> b)) {
        cout << "Invalid input. Please enter numeric values: ";
        clearInputStream();
    }
    cout << "Result: " << (a - b) << endl;
}

void performMultiplication() {
    double a, b;
    cout << "Enter two numbers: ";
    while (!(cin >> a >> b)) {
        cout << "Invalid input. Please enter numeric values: ";
        clearInputStream();
    }
    cout << "Result: " << (a * b) << endl;
}

void performDivision() {
    double a, b;
    cout << "Enter two numbers: ";
    while (!(cin >> a >> b)) {
        cout << "Invalid input. Please enter numeric values: ";
        clearInputStream();
    }
    if (b != 0) {
        cout << "Result: " << (a / b) << endl;
    }
    else {
        cout << "Error: Division by zero!" << endl;
    }
}

void performSquareRoot() {
    double a;
    cout << "Enter a number: ";
    while (!(cin >> a)) {
        cout << "Invalid input. Please enter a numeric value: ";
        clearInputStream();
    }
    if (a >= 0) {
        cout << "Result: " << sqrt(a) << endl;
    }
    else {
        cout << "Error: Negative input for square root!" << endl;
    }
}

void performExponentiation() {
    double base, exponent;
    cout << "Enter base and exponent: ";
    while (!(cin >> base >> exponent)) {
        cout << "Invalid input. Please enter numeric values: ";
        clearInputStream();
    }
    cout << "Result: " << pow(base, exponent) << endl;
}

void performLogarithm() {
    double value;
    cout << "Enter a number: ";
    while (!(cin >> value)) {
        cout << "Invalid input. Please enter a numeric value: ";
        clearInputStream();
    }
    if (value > 0) {
        cout << "Result: " << log10(value) << endl;
    }
    else {
        cout << "Error: Logarithm of non-positive number!" << endl;
    }
}

void performSine() {
    double radians;
    cout << "Enter angle in radians: ";
    while (!(cin >> radians)) {
        cout << "Invalid input. Please enter a numeric value: ";
        clearInputStream();
    }
    cout << "Result: " << sin(radians) << endl;
}

void performCosine() {
    double radians;
    cout << "Enter angle in radians: ";
    while (!(cin >> radians)) {
        cout << "Invalid input. Please enter a numeric value: ";
        clearInputStream();
    }
    cout << "Result: " << cos(radians) << endl;
}

void performTangent() {
    double radians;
    cout << "Enter angle in radians: ";
    while (!(cin >> radians)) {
        cout << "Invalid input. Please enter a numeric value: ";
        clearInputStream();
    }
    cout << "Result: " << tan(radians) << endl;
}

int main() {
    int choice;

    do {
        showMenu();
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number: ";
            clearInputStream();
        }

        switch (choice) {
        case 1:
            performAddition();
            break;
        case 2:
            performSubtraction();
            break;
        case 3:
            performMultiplication();
            break;
        case 4:
            performDivision();
            break;
        case 5:
            performSquareRoot();
            break;
        case 6:
            performExponentiation();
            break;
        case 7:
            performLogarithm();
            break;
        case 8:
            performSine();
            break;
        case 9:
            performCosine();
            break;
        case 10:
            performTangent();
            break;
        case 11:
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 11);

    return 0;
}
