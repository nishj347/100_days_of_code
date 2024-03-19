//Author : nishj347 @github
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
};
class ScientificCalculator {
public:
    double squareRoot(double num) {
        return sqrt(num);
    }

    double power(double base, double exponent) {
        return pow(base, exponent);
    }
};

class CombinedCalculator : public SimpleCalculator, public ScientificCalculator {
public:
    void printResult(int a, int b) {
        cout << "Simple Calculator Results:" << endl;
        cout << "Addition: " << add(a, b) << endl;
        cout << "Subtraction: " << subtract(a, b) << endl;

        cout << "\nScientific Calculator Results:" << endl;
        cout << "Square Root of " << a << ": " << squareRoot(a) << endl;
        cout << b << " raised to the power " << a << ": " << power(b, a) << endl;
    }
};

int main() {
    CombinedCalculator calculator;

    int num1 = 25, num2 = 5;
    calculator.printResult(num1, num2);

    return 0;
}
