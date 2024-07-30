#include <iostream>
#include <stdexcept>
using namespace std;
double readDouble() {
    double num;
    cout << "Enter a double type number: ";
    if (!(cin >> num)) {
        throw invalid_argument("Invalid input. Please enter a valid double type number.");
    }
    return num;
}

double divideNumbers(double num1, double num2) {
    if (num2 == 0) {
        throw invalid_argument("Cannot divide by zero.");
    }
    return num1 / num2;
}

int main() {
    try {
        double num1 = readDouble();
        double num2 = readDouble();

        double result = divideNumbers(num1, num2);

        cout << "The result of " << num1 << " divided by " << num2 << " is: " << result <<endl;

    } 
    catch (const invalid_argument& e) 
    {
        cerr << "Error: " << e.what() << endl;
    } 
    catch (...) 
    {
        cerr << "An unexpected error occurred." << endl;
    }

    return 0;
}

