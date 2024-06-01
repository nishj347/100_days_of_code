// Message Passing: Implement a program where two classes Sender and Receiver
// communicate by passing messages through member functions.
#include <iostream>
using namespace std;

class reciever;

class sender {
public:
    int a = 2, b = 3;
    void send(reciever &r);
};

class reciever {
public:
    void display(int a, int b) {
        cout << "no sender, you're wrong, their sum is: " << a + b << endl;
    }
};

void sender::send(reciever &r) {
    cout << "the sum of " << a << " and " << b << " is: " << a + b << endl;
    r.display(a, b);
}

int main() {
    sender s;
    reciever r;
    s.send(r);
    return 0;
}
