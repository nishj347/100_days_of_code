//Author:nishj347 @github
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(); // Default constructor
    Complex(int r, int i); 
    void display(); 
    Complex add(const Complex& c);
    Complex subtract(const Complex& c);
    Complex multiply(const Complex& c); 
};

// Default constructor
Complex::Complex() {
    real = 0;
    img = 0;
}

// Parameterized constructor
Complex::Complex(int r, int i) {
    real = r;
    img = i;
}

// Display the complex number
void Complex::display() {
    cout << real << " + " << img << "i";
}

// Add two complex numbers
Complex Complex::add(const Complex& c) {
    Complex result;
    result.real = real + c.real;
    result.img = img + c.img;
    return result;
}

// Subtract two complex numbers
Complex Complex::subtract(const Complex& c) {
    Complex result;
    result.real = real - c.real;
    result.img = img - c.img;
    return result;
}

// Multiply two complex numbers
Complex Complex::multiply(const Complex& c) {
    Complex result;
    result.real = (real * c.real) - (img * c.img);
    result.img = (real * c.img) + (img * c.real);
    return result;
}

int main() {
    int real1, img1, real2, img2;

    // Input first complex number
    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> img1;

    // Input second complex number
    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> img2;

    // Create Complex objects for both numbers
    Complex c1(real1, img1);
    Complex c2(real2, img2);

    // Calculate and display the sum
    Complex sum = c1.add(c2);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    // Calculate and display the difference
    Complex diff = c1.subtract(c2);
    cout << "Difference: ";
    diff.display();
    cout << endl;

    // Calculate and display the product
    Complex product = c1.multiply(c2);
    cout << "Product: ";
    product.display();
    cout << endl;

    return 0;
}
