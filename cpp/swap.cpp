// Author: nishj347 @github
#include <iostream>
class Number {
private:
    int num;
public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number &a, Number &b);
};
void swapNumbers(Number &a, Number &b) {
    int temp = a.num;
    a.num = b.num;
    b.num = temp;
}

int main() {
    Number num1(10);
    Number num2(20);

    std::cout << "Before swapping: num1 = " << num1.num << ", num2 = " << num2.num << std::endl;

    swapNumbers(num1, num2);

    std::cout << "After swapping: num1 = " << num1.num << ", num2 = " << num2.num << std::endl;

    return 0;
}
