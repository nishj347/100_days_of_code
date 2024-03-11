//Author : nishj347 @github

#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
double add(double a, double b) {
    return a + b;
}
int main() {
  cout << "Sum of 3 and 5 is: " << add(3, 5) << std::endl;
  cout << "Sum of 3, 5, and 7 is: " << add(3, 5, 7) << std::endl;
  cout << "Sum of 3.5 and 4.5 is: " << add(3.5, 4.5) << std::endl;

    return 0;
}
