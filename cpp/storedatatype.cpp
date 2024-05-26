//Author : nishj347 @github
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int intValue;
    long longValue;
    char charValue;
    float floatValue;
    double doubleValue;
    
    // Taking inputs from the user
    cin >> intValue;
    cin >> longValue;
    cin >> charValue;
    cin >> floatValue;
    cin >> doubleValue;

    // Print each element on a new line
    cout << intValue << endl;
    cout << longValue << endl;
    cout << charValue << endl;
    
    // Set precision for float and double values
    cout << fixed << setprecision(3) << floatValue << endl;
    cout << fixed << setprecision(9) << doubleValue << endl;

    return 0;
}


