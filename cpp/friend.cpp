//Author:nishj347 @github
/*Create a class Rectangle with private data members length and width. Define two friend functions calculateArea() and calculatePerimeter() that calculate and display the area and perimeter of the rectangle respectively.*/

#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;
    
    public:
        Rectangle(int l, int w) : length(l), width(w) {}
        friend void calculateArea(Rectangle r);

        friend void calculatePerimeter(Rectangle r);
};

void calculateArea(Rectangle r) {
    int area = r.length * r.width;
    cout << "Area of the rectangle: " << area << endl;
}


void calculatePerimeter(Rectangle r) {
    int perimeter = 2 * (r.length + r.width);
    cout << "Perimeter of the rectangle: " << perimeter << endl;
}

int main() {
    Rectangle rect(45,89);
    calculateArea(rect); 
    calculatePerimeter(rect); 
    
    return 0;
}
