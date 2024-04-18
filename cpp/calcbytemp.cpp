// Author : nishj347 @github
#include <iostream>
using namespace std;

template <class T>
class calculator {
private:
    T a;
    T b;

public:
    calculator(T a, T b) {
        this->a = a;
        this->b = b;
    }

    T add() {
        return a + b;
    }

    T subtract() {
        return a - b;
    }

    T multiply() {
        return a * b;
    }

    T divide() {
        return a / b;
    }
};

int main() {
    calculator<int> c1(5, 3);
    cout << " addition: " << c1.add() << endl;
    cout <<  "subtraction: " << c1.subtract() << endl;
    cout << " multiplication: " << c1.multiply() << endl;
    cout << " division: " << c1.divide() << endl;

    calculator<float> c2(5.5f, 3.3f);
    cout << " addition: " << c2.add() << endl;
    cout << " subtraction: " << c2.subtract() << endl;
    cout << " multiplication: " << c2.multiply() << endl;
    cout << " division: " << c2.divide() << endl;

    return 0;
}
